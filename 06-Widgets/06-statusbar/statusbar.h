#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QMainWindow>
#include <QPushButton>

class StatusBar : public QMainWindow
{

	Q_OBJECT

public:
	StatusBar(QWidget* parent = nullptr);

private slots:
	void OnOkPressed();
	void OnApplyPressed();

private:
	QPushButton* okBtn;
	QPushButton* aplBtn;

};

#endif