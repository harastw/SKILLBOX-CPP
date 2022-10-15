#include "ButtonWidget.hpp"

ButtonWidget::ButtonWidget(QWidget *parent)
  : QMainWindow(parent) {
  button = new QPushButton(this);
  setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  button->setIcon(QIcon("buttonUp.png"));
  button->setIconSize(QSize(200, 190));
  button->setFixedSize(200,190);

  player = new QMediaPlayer(this);
 
  connect(button, SIGNAL(clicked()), this, SLOT(click()));
}

ButtonWidget::~ButtonWidget() {
  delete button;
  delete player;
}

void ButtonWidget::click() {
  button->setIcon(QIcon("buttonDown.png"));
  
  player->setMedia(QUrl::fromLocalFile("/home/ai/code/cpp/38/1/sound.mp3"));
  player->setVolume(40);
  player->play();
}

