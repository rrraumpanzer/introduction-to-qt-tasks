#include <QApplication>
#include "CalculatorWidget.cpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}