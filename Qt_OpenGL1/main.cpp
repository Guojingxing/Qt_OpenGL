#include "window.h"
#include <QtWidgets/QApplication>
#include <qguiapplication.h>

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);
    Window w;
	w.resize(QSize(800, 600));
    w.show();
    return a.exec();
}
