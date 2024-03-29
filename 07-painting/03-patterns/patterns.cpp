#include <QApplication>
#include <QPainter>
#include "patterns.h"

Patterns::Patterns(QWidget* parent)
	: QWidget(parent)
{
}

void Patterns::paintEvent(QPaintEvent* e)
{
	Q_UNUSED(e);

	doPainting();
}

void Patterns::doPainting()
{
	QPainter painter(this);
	painter.setPen(Qt::NoPen);

	painter.setBrush(Qt::HorPattern);
	painter.drawRect(10, 15, 90, 60);

	painter.setBrush(Qt::VerPattern);
	painter.drawRect(130, 15, 90, 60);

	painter.setBrush(Qt::CrossPattern);
	painter.drawRect(250, 15, 90, 60);

	painter.setBrush(Qt::Dense7Pattern);
	painter.drawRect(10, 105, 90, 60);

	painter.setBrush(Qt::Dense6Pattern);
	painter.drawRect(130, 105, 90, 60);

	painter.setBrush(Qt::Dense5Pattern);
	painter.drawRect(250, 105, 90, 60);

	painter.setBrush(Qt::BDiagPattern);
	painter.drawRect(10, 195, 90, 60);

	painter.setBrush(Qt::FDiagPattern);
	painter.drawRect(130, 195, 90, 60);

	painter.setBrush(Qt::DiagCrossPattern);
	painter.drawRect(250, 195, 90, 60);
  }
