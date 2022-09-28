#include <QVBoxLayout>
#include "slider.hpp"

ColorSlider::ColorSlider(QWidget *parent)
  : QWidget(parent) {

  QVBoxLayout* vbox = new QVBoxLayout(this); // QHBoxLayout - line style
         
  slider = new QSlider(Qt::Horizontal , this);
  slider->setRange(0,100); // set range for slider
  vbox->addWidget(slider);
 
  valueLabel = new QLabel("0", this); // QLabel - output widget
  vbox->addWidget(valueLabel);
 
  connect(slider, &QSlider::valueChanged, valueLabel, 
    static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

  pixmap = QPixmap(GREEN); // create QPixmap: green is default color
  picLabel = new QLabel(this);
  picLabel->setPixmap(pixmap);

  vbox->addWidget(picLabel); // output image

  connect(slider, &QSlider::valueChanged, picLabel, [this]() {
	    sliderValue = slider->value(); // update
            if (sliderValue < 33) {
              pixmap = QPixmap(GREEN);
	      picLabel->setPixmap(pixmap);
	    }
            else if (sliderValue < 66) {
              pixmap = QPixmap(YELLOW);
	      picLabel->setPixmap(pixmap);
	    }
            else {
              pixmap = QPixmap(RED);
	      picLabel->setPixmap(pixmap);
	    }
          });
}
