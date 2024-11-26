#include <QWidget>
#include <QKeyEvent>

class CustomWidget : public QWidget {
protected:
    void keyPressEvent(QKeyEvent *event) override {
        if (event->key() == Qt::Key_Space) {
            setStyleSheet("background-color: red;");
        }
    }

    void mousePressEvent(QMouseEvent *event) override {
        setStyleSheet("background-color: green;");
    }
};
