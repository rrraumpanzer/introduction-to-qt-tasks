#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(320, 240);       // Задайте размер окна
    window.setWindowTitle("Простое окно");
    window.show();                 // Отобразите окно

    return app.exec();
}