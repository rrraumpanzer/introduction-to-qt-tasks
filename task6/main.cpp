#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(320, 240);       // Задайте размер окна
    window.setWindowTitle("Конвертация валют");
    QLabel *amountLabel = new QLabel("Введите сумму:", &window);
    QLineEdit *amountInput = new QLineEdit(&window);
    QLabel *currencyLabel = new QLabel("Выберите валюты для перевода (начальная - конечная)", &window);
    QComboBox *currencyCombo = new QComboBox(&window);
    currencyCombo->addItems({"USD", "EUR", "RUB"});

    QComboBox *currencyComboTarget = new QComboBox(&window);
    currencyComboTarget->addItems({"USD", "EUR", "RUB"});

    QPushButton *convertButton = new QPushButton("Конвертировать", &window);
    
    QObject::connect(convertButton, &QPushButton::clicked, [&]() {
    double amount = amountInput->text().toDouble();

    QString currency = currencyCombo->currentText();
    QString currencyTarget = currencyComboTarget->currentText();
    double result = 0.0;

    if (currency == "USD") 
    {
        if (currencyTarget == "EUR")
        {
            result = amount * 1.1;
        }
        else if (currencyTarget == "RUB")
        {
            result = amount * 100;
        }
        else result = amount;
    } 
    else if (currency == "EUR") 
    {
        if (currencyTarget == "USD")
        {
            result = amount * 0.9;
        }
        else if (currencyTarget == "RUB")
        {
            result = amount * 110;
        }
        else result = amount;
    }
    else if (currency == "RUB")
    {
        if (currencyTarget == "USD")
        {
            result = amount / 100;
        }
        else if (currencyTarget == "EUR")
        {
            result = amount / 110;
        }
        else result = amount;
    }

    QMessageBox::information(&window, "Результат", "Конвертированная сумма: " + QString::number(result));
    });

    QHBoxLayout *currencyVariants = new QHBoxLayout;
    currencyVariants-> addWidget(currencyCombo);
    currencyVariants->addWidget(currencyComboTarget);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(amountLabel);
    mainLayout->addWidget(amountInput);
    mainLayout->addWidget(currencyLabel);
    mainLayout->addLayout(currencyVariants);
    mainLayout->addWidget(convertButton);
    window.setLayout(mainLayout);
    window.show();

    return app.exec();
}