#include <QApplication>
#include "Calculator.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  Calculator calculator(nullptr);

  calculator.setWindowTitle("calculator");
  calculator.show();
  
  return QApplication::exec();
}
