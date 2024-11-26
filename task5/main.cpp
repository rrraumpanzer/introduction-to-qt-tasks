#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(512, 512);       // Задайте размер окна
    window.setWindowTitle("Калькулятор");
    QGridLayout *layout = new QGridLayout;

    QLineEdit *display = new QLineEdit(&window);
    layout->addWidget(display, 0, 0, 1, 4);

    QStringList buttons = {"7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", ".", "=", "+"};

    int pos = 0;
    for (int row = 1; row <= 4; ++row) {
        for (int col = 0; col < 4; ++col) {
            QPushButton *button = new QPushButton(buttons[pos], &window);
            layout->addWidget(button, row, col);
            ++pos;
        }
    }
    /*
    QObject::connect(button0, &QPushButton::clicked, [&]() {
    display->setText(display->text() + "0");
    });
    */

    window.setLayout(layout);
    window.show();                 

    return app.exec();
}