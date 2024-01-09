/*
 * 1.c
 *
 *  Created on: 9 mai 2022
 *      Author: bogdan
 */
#include<windows.h>
#include <GL/glut.h>
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f( 0.5f, -0.5f);
	glVertex2f( 0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();
	glFlush();}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glutMainLoop();
return 0;}




