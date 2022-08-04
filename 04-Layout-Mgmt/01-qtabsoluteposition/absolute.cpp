#include <QTextEdit>
#include "absolute.h"

Absolute::Absolute(QWidget* parent)
	: QWidget(parent)
{
	auto* ledit = new QTextEdit(this);
	ledit->setGeometry(5, 5, 200, 150);
}