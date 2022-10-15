#pragma once

#include <QMainWindow>
#include <QWidget>
#include <QFileDialog>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsBlurEffect>
#include <QPainter>

#include "ui_design.h"

class BlurWidget : public QMainWindow {
  Q_OBJECT

public:
  BlurWidget(QWidget *parent = nullptr);

public slots:
  void setBlur();
  void open();

private:
  QString path;
  Ui::MainWindow design;
};
