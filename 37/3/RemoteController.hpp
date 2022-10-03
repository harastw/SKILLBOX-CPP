#pragma once

#include <QMainWindow>
#include <QLabel>

class RemoteController : public QMainWindow {
  Q_OBJECT
  
public:
  QLabel *status = nullptr;
  
  RemoteController(QWidget *parent = nullptr);

public slots:
  void to1();
  void to2();
  void to3();
  void to4();
  void to5();
  void to6();
  void to7();
  void to8();
  void to9();
  void to0();
  void minus();
  void plus();
  void back();
  void next();

private:
  int channel = 0, volumePercent = 40;
  void statusUpdate();
  QString intToQString(int n);
};
