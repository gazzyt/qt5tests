#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>
#include "statusbar.h"

StatusBar::StatusBar(QWidget* parent)
	: QMainWindow(parent)
{
	auto* frame = new QFrame(this);
	setCentralWidget(frame);

	auto* hbox = new QHBoxLayout(frame);

	okBtn = new QPushButton("OK", frame);
	hbox->addWidget(okBtn, 0, Qt::AlignLeft | Qt::AlignTop);

	aplBtn = new QPushButton("Apply", frame);
	hbox->addWidget(aplBtn, 1, Qt::AlignLeft | Qt::AlignTop);

	statusBar();

	connect(okBtn, &QPushButton::clicked, this, &StatusBar::OnOkPressed);
	connect(aplBtn, &QPushButton::clicked, this, &StatusBar::OnApplyPressed);
}

void StatusBar::OnOkPressed()
{
	statusBar()->showMessage("OK button pressed", 2000);
}

void StatusBar::OnApplyPressed()
{
	statusBar()->showMessage("Apply button pressed", 2000);
}
