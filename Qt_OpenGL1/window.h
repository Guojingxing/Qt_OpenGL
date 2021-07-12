#pragma once

#include <QtWidgets/QWidget>
#include <qopenglwindow.h>
#include <qopenglfunctions.h>
#include "ui_window.h"

class Window : public QOpenGLWindow, protected QOpenGLFunctions
{
    Q_OBJECT

public:
	~Window();

	void initializeGL();
	void resizeGL(int width, int height);
	void paintGL();

private:
    Ui::windowClass ui;
};
