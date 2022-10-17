#include "MainWindow.hpp"

MainWindow::MainWindow(QWidget* parent)
  : QMainWindow(parent)
  , design(new Ui::MainWindow) {
  design->setupUi(this);
  connect(design->lineEdit, &QLineEdit::textEdited, [this](QString currentText) {
    QRegularExpression exp("\\+{1,1}\\d{11,11}$");
    if (exp.match(currentText).hasMatch())
      setOkLabel();
    else
      setNonOkLabel();
  });
}

MainWindow::~MainWindow() {
  delete design;
}

void MainWindow::setOkLabel() {
  design->label->setText("Ok");
  design->label->setStyleSheet("QLabel {color : green}");
}

void MainWindow::setNonOkLabel() {
  design->label->setText("Fail");
  design->label->setStyleSheet("QLabel {color : red}");
}
