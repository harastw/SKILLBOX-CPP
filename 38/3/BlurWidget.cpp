#include "BlurWidget.hpp"

QImage applyEffectToImage(QImage src, QGraphicsEffect *effect, int extent = 0)
{
    if(src.isNull()) return QImage();
    if(!effect) return src;             
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(QPixmap::fromImage(src));
    item.setGraphicsEffect(effect);
    scene.addItem(&item);
    QImage res(src.size()+QSize(extent*2, extent*2), QImage::Format_ARGB32);
    res.fill(Qt::transparent);
    QPainter ptr(&res);
    scene.render(&ptr, QRectF(), QRectF( -extent, -extent, src.width()+extent*2,
					 src.height()+extent*2 ) );
    return res;
}

BlurWidget::BlurWidget(QWidget *parent)
  : QMainWindow(parent) {
  design.setupUi(this);
  path = "./sunflowers.jpg";
  QImage image(path);
  design.label->setPixmap(QPixmap::fromImage(image));
}

void BlurWidget::setBlur() {
  int radius = design.horizontalSlider->value();

  QGraphicsBlurEffect *blur = new QGraphicsBlurEffect;
  blur->setBlurRadius(radius);
  QImage source(path);
  QImage result = applyEffectToImage(source, blur);
  
  design.label->setPixmap(QPixmap::fromImage(result));
}

void BlurWidget::open() {
  path = QFileDialog::getOpenFileName(nullptr, "find file", "./",
				      "Images (*.png *.xpm *.jpg)");
  QImage image = QImage(path);
  design.label->setPixmap(QPixmap::fromImage(image));
}
