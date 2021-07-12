#include "window.h"

Window::~Window() {

}

//glClearColor函数设置好清除颜色，glClear利用glClearColor函数设置好的当前清除颜色设置窗口颜色
void Window::initializeGL() {
	initializeOpenGLFunctions(); //初始化当前OpenGL环境
	//GLclampf：这也是一个四字节的精度浮点变量，但OpenGL的使用GLclampf时，它是表明这个特定变量的值应始终介于0.0和1.0。
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);//设置清除颜色
	
}


void Window::resizeGL(int width, int height) {
	//目前不处理高度宽度变化
}


void Window::paintGL() {
	glClear(GL_COLOR_BUFFER_BIT);//用在initializeGL设置的颜色清除背景
}