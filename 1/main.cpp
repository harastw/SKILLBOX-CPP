#include <QApplication>
#include "ui_design.h"
#include "Calculator.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  Calculator calculator(nullptr);
  
  Ui::MainWindow design;
  design.setupUi(&calculator);
  calculator.lineEdit = design.lineEdit, calculator.lineEdit2 = design.lineEdit2;
  calculator.label = design.label;

  calculator.setWindowTitle("calculator");
  calculator.show();
  
  return QApplication::exec();
}
