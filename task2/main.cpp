#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(320, 240);       // Задайте размер окна
    window.setWindowTitle("Простое окно");

    QLabel *label = new QLabel("Нажмите кнопку", &window);
    QPushButton *button1 = new QPushButton("Кнопка 1", &window);
    QPushButton *button2 = new QPushButton("Кнопка 2", &window);
    QObject::connect(button1, &QPushButton::clicked, [&]() 
    {
        label->setText("Кнопка 1 нажата");
    });

    QObject::connect(button2, &QPushButton::clicked, [&]() 
    {
        label->setText("Кнопка 2 нажата");
    });



    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button1);
    layout->addWidget(button2);
    window.setLayout(layout);
    window.show();                 

    return app.exec();
}