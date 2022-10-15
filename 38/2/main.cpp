#include "HtmlEditor.cpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  HtmlEditor editor(nullptr);

  editor.setWindowTitle("html editor");
  editor.show();
  
  return QApplication::exec();
}
