#include <QApplication>
#include "CustomWidget.cpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CustomWidget window;

    window.resize(512, 512);       
    window.setWindowTitle("Простое окно");
    window.show();                 

    return app.exec();
}