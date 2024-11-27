#include <QGridLayout>
#include <QLineEdit>
#include <QRegularExpressionValidator>
#include <QPushButton>
#include <QWidget>

class Calculator : public QWidget {
private:
    QLineEdit *display;
    QString currentNumber;
    double lastNumber;
    QString pendingOperation;

public:
    Calculator(QWidget *parent = nullptr) : QWidget(parent) {
        resize(512, 512);
        setWindowTitle("Калькулятор");
        
        QGridLayout *layout = new QGridLayout;

        display = new QLineEdit(this);
        display->setReadOnly(true);
        display->setAlignment(Qt::AlignRight);
        display->setText("0");
        layout->addWidget(display, 0, 0, 1, 4);

        QStringList buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "0", ".", "=", "+"
        };

        int pos = 0;
        for (int row = 1; row <= 4; ++row) {
            for (int col = 0; col < 4; ++col) {
                QPushButton *button = new QPushButton(buttons[pos], this);
                layout->addWidget(button, row, col);
                
                if (buttons[pos] >= "0" && buttons[pos] <= "9" || buttons[pos] == ".") {
                    connect(button, &QPushButton::clicked, this, [this, buttons, pos]() {
                        numberPressed(buttons[pos]);
                    });
                } else if (buttons[pos] != "=") {
                    connect(button, &QPushButton::clicked, this, [this, buttons, pos]() {
                        operationPressed(buttons[pos]);
                    });
                } else {
                    connect(button, &QPushButton::clicked, this, &Calculator::calculateResult);
                }
                ++pos;
            }
        }

        QPushButton *clearButton = new QPushButton("C", this);
        layout->addWidget(clearButton, 5, 0, 1, 4);
        connect(clearButton, &QPushButton::clicked, this, &Calculator::clear);

        setLayout(layout);
        lastNumber = 0;
    }

private slots:
    void numberPressed(const QString &digit) {
        if (display->text() == "0" && digit != ".") {
            display->clear();
        }
        display->setText(display->text() + digit);
    }

    void operationPressed(const QString &op) {
        lastNumber = display->text().toDouble();
        pendingOperation = op;
        display->clear();
    }

    void calculateResult() {
        double currentNum = display->text().toDouble();
        double result = 0;

        if (pendingOperation == "+") {
            result = lastNumber + currentNum;
        } else if (pendingOperation == "-") {
            result = lastNumber - currentNum;
        } else if (pendingOperation == "*") {
            result = lastNumber * currentNum;
        } else if (pendingOperation == "/") {
            if (currentNum != 0) {
                result = lastNumber / currentNum;
            } else {
                display->setText("Ошибка");
                return;
            }
        }

        display->setText(QString::number(result));
        lastNumber = result;
    }

    void clear() {
        display->setText("0");
        lastNumber = 0;
        pendingOperation.clear();
    }
};