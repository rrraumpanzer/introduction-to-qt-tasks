#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QMenuBar>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QVBoxLayout>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;

    window.resize(512, 512);
    window.setWindowTitle("Простой текстовый редактор");

    QTextEdit *textEdit = new QTextEdit();
    window.setCentralWidget(textEdit);
    QMenuBar *menuBar = new QMenuBar();
    window.setMenuBar(menuBar);
    QMenu *fileMenu = menuBar->addMenu("Файл");
    QAction *openAction = fileMenu->addAction("Открыть");
    QAction *saveAction = fileMenu->addAction("Сохранить");
    
    menuBar->setDefaultUp(false);

    QObject::connect(openAction, &QAction::triggered, [&]() {
    QString fileName = QFileDialog::getOpenFileName(&window, "Открыть файл");
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) 
        {
            textEdit->setText(file.readAll());
        }
    });

    QObject::connect(saveAction, &QAction::triggered, [&]() {
    QString fileName = QFileDialog::getSaveFileName(&window, "Сохранить файл");
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) 
        {
            QTextStream out(&file);
            out << textEdit->toPlainText();
        }
    });
    window.show();

    return app.exec();
}