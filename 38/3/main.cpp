#include <QApplication>
#include "BlurWidget.hpp"
int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  BlurWidget blur(nullptr);
  blur.setWindowTitle("blur editor");
  blur.show();
  return QApplication::exec();
}
