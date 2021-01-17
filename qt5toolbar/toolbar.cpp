#include <QToolBar>
#include <QIcon>
#include <QAction>
#include "toolbar.h"

Toolbar::Toolbar(QWidget* parent)
:   QMainWindow(parent)
{
    QPixmap newpix(":/images/new.png");
    QPixmap openpix(":/images/open.png");
    QPixmap quitpix(":/images/quit.png");

    QToolBar* toolbar = addToolBar("main toolbar");
    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();

    QAction* quit = toolbar->addAction(QIcon(quitpix), "Quit Application");

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}