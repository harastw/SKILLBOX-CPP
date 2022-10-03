#include <QApplication>
#include "ui_design.h"
#include "RemoteController.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  RemoteController controller(nullptr);
  
  Ui::MainWindow design;
  design.setupUi(&controller);
  controller.status = design.label;

  controller.setWindowTitle("remoteController");
  controller.resize(240, 680);
  controller.show();
  
  return QApplication::exec();
}
