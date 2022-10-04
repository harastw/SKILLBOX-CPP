#include <QApplication>
#include "VPlayer.cpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  VPlayer player(nullptr);

  player.setWindowTitle("VPlayer");
  player.show();
  
  return QApplication::exec();
}
