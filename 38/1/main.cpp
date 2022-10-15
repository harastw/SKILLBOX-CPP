#include <QApplication>
#include "ButtonWidget.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  ButtonWidget button(nullptr);
  button.setWindowTitle("button");
  button.resize(240, 240);
  button.show();
  
  return QApplication::exec();
}
