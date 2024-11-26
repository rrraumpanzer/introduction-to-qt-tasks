#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QMessageBox>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(320, 240);       // Задайте размер окна
    window.setWindowTitle("Простое окно");
    QLabel *amountLabel = new QLabel("Введите сумму:", &window);
    QLineEdit *amountInput = new QLineEdit(&window);
    QLabel *currencyLabel = new QLabel("Выберите валюту:", &window);
    QComboBox *currencyCombo = new QComboBox(&window);
    currencyCombo->addItems({"USD", "EUR", "RUB"});

    QPushButton *convertButton = new QPushButton("Конвертировать", &window);
    
    QObject::connect(convertButton, &QPushButton::clicked, [&]() {
    double amount = amountInput->text().toDouble();
    QString currency = currencyCombo->currentText();
    double result = 0.0;

    if (currency == "USD") {
        result = amount * 1.1;  // Пример курса
    } else if (currency == "EUR") {
        result = amount * 0.9;
    }

    QMessageBox::information(&window, "Результат", "Конвертированная сумма: " + QString::number(result));
    });

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(amountLabel);
    mainLayout->addWidget(amountInput);
    mainLayout->addWidget(currencyLabel);
    mainLayout->addWidget(currencyCombo);
    mainLayout->addWidget(convertButton);
    window.setLayout(mainLayout);
    window.show();

    return app.exec();
}