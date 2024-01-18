#include <QApplication>
#include <QScreen>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();

    int window_height 	= screenGeometry.height() / 2;
    int window_width 	= screenGeometry.width() / 2;

    MainWindow window;
    // window.setFixedSize(window_width, window_height);
    window.resize(window_width, window_height);

    window.show();
    return app.exec();
}
