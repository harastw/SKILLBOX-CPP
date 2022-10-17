#pragma once

#include <QMainWindow>
#include <QWidget>
#include <QApplication>
#include <QRegularExpression>
#include "./ui_design.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();
	       
private slots:
  void setOkLabel();
  void setNonOkLabel();
private:
  Ui::MainWindow* design;
};
