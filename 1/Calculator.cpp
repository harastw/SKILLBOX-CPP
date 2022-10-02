#include "Calculator.hpp"
#include <vector>
#include <stdio.h>

bool isNumber(QString s) {
  std::vector<QChar> v(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++) {
    if (!v[i].isDigit())
      return false;
  }
  return true;
}

Calculator::Calculator(QWidget *parent) : QMainWindow(parent) {;}

void Calculator::firstNumber() {
  number1 = lineEdit->text().toInt();
}
void Calculator::secondNumber() {
  number2 = lineEdit2->text().toInt();
}

void Calculator::plus() {
  if (isNumber(lineEdit->text()) && isNumber(lineEdit2->text())) {
    firstNumber(), secondNumber();
    label->setNum(number1 + number2);
  }
  else
    label->setText("Error");
}

void Calculator::minus() {
  if (isNumber(lineEdit->text()) && isNumber(lineEdit2->text())) {
    firstNumber(), secondNumber();
    label->setNum(number1 - number2);
  }
  else
    label->setText("Error");
}

void Calculator::multi() {
  if (isNumber(lineEdit->text()) && isNumber(lineEdit2->text())) {
    firstNumber(), secondNumber();
    label->setNum(number1 * number2);
  }
  else
    label->setText("Error");
}

void Calculator::division() {
  if (isNumber(lineEdit->text()) && isNumber(lineEdit2->text())) {
    firstNumber(), secondNumber();
    if (number2 != 0)
      label->setNum(number1 / number2);
    else
      label->setText("Error");
  }
  else
    label->setText("Error");
}
