#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

protected:
    #ifndef QT_NO_CONTEXTMENU
        void contextMenuEvent(QContextMenuEvent *event) override;
    #endif // QT_NO_CONTEXTMENU

private:
    void createActions();
    void createMenus();

    QMenu 			*fileMenu;
    QMenu 			*editMenu;
    QActionGroup 	*alignmentGroup;
    QAction 		*newAct;
    QAction 		*cutAct;
    QAction 		*copyAct;
    QAction 		*pasteAct;
    QLabel			*infoLabel;

private slots:
    void newFile();
    void cut();
    void copy();
    void paste();
};

#endif // MAINWINDOW_H
