#include "window.h"

#include <QPushButton>

Window::Window(QWidget *parent)
    : QWidget{parent}
{
    m_button = new QPushButton(this);
    m_button->setGeometry(100, 100, 800, 300);
    m_button->setText("Howdy, Partner!");
    m_button->setToolTip("This is not a tooltip");
    m_button->show();

}
