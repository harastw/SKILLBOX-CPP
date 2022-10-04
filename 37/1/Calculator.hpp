#pragma once

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include "ui_design.h"

class Calculator : public QMainWindow {
  Q_OBJECT
  
public:

  QLineEdit *lineEdit = nullptr, *lineEdit2 = nullptr;
  QLabel *label = nullptr;
  
  Calculator(QWidget *parent = nullptr);

public slots:
  void firstNumber();
  void secondNumber();
  
  void plus();
  void minus();
  void multi();
  void division();

private:
  int number1, number2;
};
