#include "HtmlEditor.hpp"

HtmlEditor::HtmlEditor(QWidget *parent)
  : QMainWindow(parent) {
  design.setupUi(this);
  
  htmlCode="<h1>test</h1>";
  design.webEngineView->setHtml(htmlCode);
}

void HtmlEditor::reload() {
  htmlCode = design.plainTextEdit->toPlainText();
  design.webEngineView->setHtml(htmlCode);
}
