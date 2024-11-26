#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.resize(512, 512);       
    window.setWindowTitle("Простое окно");
    
    QLabel *label1 = new QLabel("Имя:", &window);
    QLineEdit *lineEdit1 = new QLineEdit(&window);
    QLabel *label2 = new QLabel("Фамилия:", &window);
    QLineEdit *lineEdit2 = new QLineEdit(&window);
    QPushButton *submitButton = new QPushButton("Отправить", &window);

    QHBoxLayout *layout1 = new QHBoxLayout;
    layout1->addWidget(label1);
    layout1->addWidget(lineEdit1);

    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addWidget(label2);
    layout2->addWidget(lineEdit2);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(layout1);
    mainLayout->addLayout(layout2);
    mainLayout->addWidget(submitButton);
    window.setLayout(mainLayout);

    window.show();                 

    return app.exec();
}