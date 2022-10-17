#include "MainWindow.hpp"
int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  MainWindow window(nullptr);
  window.setWindowTitle("window");
  window.show();
  return QApplication::exec();
}
