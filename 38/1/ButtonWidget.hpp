#pragma once

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QMediaPlayer>

class ButtonWidget : public QMainWindow {
  Q_OBJECT
public:
  ButtonWidget(QWidget *parent = nullptr);
  ~ButtonWidget();
public slots:
  void click();
private:
  QPushButton* button;
  QMediaPlayer* player;
};
