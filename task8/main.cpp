#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(320, 240);       // Задайте размер окна
    window.setWindowTitle("Заметки");
    QTextEdit *noteEdit = new QTextEdit(&window);
    QPushButton *saveButton = new QPushButton("Сохранить", &window);
    QPushButton *loadButton = new QPushButton("Загрузить", &window);

    QObject::connect(saveButton, &QPushButton::clicked, [&]() {
    QString fileName = QFileDialog::getSaveFileName(&window, "Сохранить заметку");
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) 
        {
            QTextStream out(&file);
            out << noteEdit->toPlainText();
        }
    });

    QObject::connect(loadButton, &QPushButton::clicked, [&]() {
    QString fileName = QFileDialog::getOpenFileName(&window, "Загрузить заметку");
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        noteEdit->setText(file.readAll());
    }
    });

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(noteEdit);
    mainLayout->addWidget(saveButton);
    mainLayout->addWidget(loadButton);
    window.setLayout(mainLayout);
    window.show();                 // Отобразите окно

    return app.exec();
}