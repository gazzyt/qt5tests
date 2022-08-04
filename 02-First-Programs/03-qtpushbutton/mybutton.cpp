#include <QApplication>
#include <QPushButton>
#include "mybutton.h"

MyButton::MyButton(QWidget* parent)
	: QWidget(parent)
{
	auto* quitBtn = new QPushButton("Quit", this);
	quitBtn->setGeometry(50, 40, 75, 30);

	connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}