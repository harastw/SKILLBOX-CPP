#include <QApplication>
#include "slider.cpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  ColorSlider mainSlider;
  
  mainSlider.setWindowTitle("QSlider");
  mainSlider.show();
  
  return app.exec();
}
