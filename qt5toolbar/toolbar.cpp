#include <QToolBar>
#include <QIcon>
#include <QAction>
#include "toolbar.h"

Toolbar::Toolbar(QWidget* parent)
:   QMainWindow(parent)
{
    const QIcon newIcon = QIcon::fromTheme("document-new", QIcon(":/images/new.png"));
    const QIcon openIcon = QIcon::fromTheme("document-open", QIcon(":/images/open.png"));
    const QIcon quitIcon = QIcon::fromTheme("application-exit", QIcon(":/images/quit.png"));

    QToolBar* toolbar = addToolBar("main toolbar");
    toolbar->addAction(newIcon, "New File");
    toolbar->addAction(openIcon, "Open File");
    toolbar->addSeparator();

    QAction* quit = toolbar->addAction(quitIcon, "Quit Application");

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
