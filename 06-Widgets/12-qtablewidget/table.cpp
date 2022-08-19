#include <QTableWidget>
#include <QHBoxLayout>
#include "table.h"

Table::Table(QWidget* parent)
	: QWidget(parent)
{
	auto* hbox = new QHBoxLayout(this);

	auto* table = new QTableWidget(25, 25, this);

	hbox->addWidget(table);
}
