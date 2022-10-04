
#include <QApplication>
#include "RemoteController.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  RemoteController controller(nullptr);

  controller.setWindowTitle("remoteController");
  controller.resize(240, 680);
  controller.show();
  
  return QApplication::exec();
}
