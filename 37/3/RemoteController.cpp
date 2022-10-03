#include "RemoteController.hpp"

QString RemoteController::intToQString(int n) {
  if (n == 0)
    return "0";
  else if (n == 1)
    return "1";
  else if (n == 2)
    return "2";
  else if (n == 3)
    return "3";
  else if (n == 4)
    return "4";
  else if (n == 5)
    return "5";
  else if (n == 6)
    return "6";
  else if (n == 7)
    return "7";
  else if (n == 8)
    return "8";
  else if (n == 9)
    return "9";
  else if (n == 10)
    return "10";
  else if (n == 20)
    return "20";
  else if (n == 30)
    return "30";
  else if (n == 40)
    return "40";
  else if (n == 50)
    return "50";
  else if (n == 60)
    return "60";
  else if (n == 70)
    return "70";
  else if (n == 80)
    return "80";
  else if (n == 90)
    return "90";
  return "100";
}

void RemoteController::statusUpdate() {
  QString outVolumePersent = intToQString(volumePercent);
  QString outChannel = intToQString(channel);
  status->setText(outChannel + " channel; volume: " + outVolumePersent + "%");
}

RemoteController::RemoteController(QWidget *parent) : QMainWindow(parent) {;}

void RemoteController::to1() {
  channel = 1;
  statusUpdate();
}
void RemoteController::to2() {
  channel = 2;
  statusUpdate();
}
void RemoteController::to3() {
  channel = 3;
  statusUpdate();
}
void RemoteController::to4() {
  channel = 4;
  statusUpdate();
}
void RemoteController::to5() {
  channel = 5;
  statusUpdate();
}
void RemoteController::to6() {
  channel = 6;
  statusUpdate();
}
void RemoteController::to7() {
  channel = 7;
  statusUpdate();
}
void RemoteController::to8() {
  channel = 8;
  statusUpdate();
}
void RemoteController::to9() {
  channel = 9;
  statusUpdate();
}
void RemoteController::to0() {
  channel = 0;
  statusUpdate();
}

void RemoteController::plus() {
  if (volumePercent < 100) {
    volumePercent += 10;
    statusUpdate();
  }
}
void RemoteController::minus() {
  if (volumePercent > 0) {
    volumePercent -= 10;
    statusUpdate();
  }
}

void RemoteController::next() {
  if (channel == 9)
    channel = 0;
  else
    channel++;
  statusUpdate();
}
void RemoteController::back() {
  if (channel == 0)
    channel = 9;
  else
    channel--;
  statusUpdate();
}
