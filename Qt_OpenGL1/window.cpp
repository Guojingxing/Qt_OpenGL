#include "window.h"

Window::~Window() {

}

//glClearColor�������ú������ɫ��glClear����glClearColor�������úõĵ�ǰ�����ɫ���ô�����ɫ
void Window::initializeGL() {
	initializeOpenGLFunctions(); //��ʼ����ǰOpenGL����
	//GLclampf����Ҳ��һ�����ֽڵľ��ȸ����������OpenGL��ʹ��GLclampfʱ�����Ǳ�������ض�������ֵӦʼ�ս���0.0��1.0��
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);//���������ɫ
	
}


void Window::resizeGL(int width, int height) {
	//Ŀǰ������߶ȿ�ȱ仯
}


void Window::paintGL() {
	glClear(GL_COLOR_BUFFER_BIT);//����initializeGL���õ���ɫ�������
}