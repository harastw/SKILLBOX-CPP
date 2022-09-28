#pragma once

#include <QWidget>
#include <QSlider>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <iostream>

#define GREEN "res/imgG.png"
#define YELLOW "res/imgY.png"
#define RED "res/imgR.png"

class ColorSlider : public QWidget {
  Q_OBJECT

public:
  ColorSlider(QWidget *parent = nullptr);
  QSlider *slider;
  QLabel *valueLabel, *picLabel;
  QPixmap pixmap;
  
private:
  int sliderValue;
};
