#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>
#include "pixmap.h"

Pixmap::Pixmap(QWidget* parent)
	: QWidget(parent)
{
	auto* hbox = new QHBoxLayout(this);

	QPixmap pixmap("../Bojnice.jpg");

	auto* label = new QLabel(this);
	label->setPixmap(pixmap);

	hbox->addWidget(label, 0, Qt::AlignTop);
}
