#pragma once

#include <QMainWindow>
#include <QApplication>
#include <QtGui>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPlainTextEdit>
#include <QWebEngineView>
#include <QPushButton>

#include "ui_design.h"

class HtmlEditor : public QMainWindow {
  Q_OBJECT

public:
  HtmlEditor(QWidget *parent = nullptr);

public slots:
  void reload();

private:
  QString htmlCode;
  Ui::MainWindow design;
};
