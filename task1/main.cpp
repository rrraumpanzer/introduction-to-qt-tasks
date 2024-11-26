#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(512, 512);       
    window.setWindowTitle("Простое окно");
    QPushButton *closeButton = new QPushButton("Закрыть", &window);
    closeButton->setGeometry(400, 400, 70, 30);  // Расположение и размер кнопки
    QObject::connect(closeButton, &QPushButton::clicked, &window, &QWidget::close);
    window.show();                

    return app.exec();
}