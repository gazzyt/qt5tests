#include <QHBoxLayout>
#include "combobox.h"

ComboBoxEx::ComboBoxEx(QWidget* parent)
	: QWidget(parent)
{
	QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian", "PuppyLinux"};

	auto* hbox = new QHBoxLayout(this);

	combo = new QComboBox();
	combo->addItems(distros);

	hbox->addWidget(combo);
	hbox->addSpacing(15);

	label = new QLabel("Arch", this);
	hbox->addWidget(label);

	connect(combo, &QComboBox::textActivated, label, &QLabel::setText);
}
