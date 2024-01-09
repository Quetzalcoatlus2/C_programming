/*
 * 1.c
 *
 *  Created on: 10 mai 2022
 *      Author: bogdan
 */
#include<windows.h>
#include<GL/glut.h>
void display() {
  char string[]="PCLP"; // sirul ce se va afisa
  int len, i, j;
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // fundal alb
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0f, 0.0f, 0.0f);
  len = (int)strlen(string);
  for(j = 8;j >= 2; j--){ // a = 35 ==== a = 0x23
    	glRasterPos2f(-0.7f,0.9f - j*0.2);
     glutBitmapCharacter(j,j+'0');
    	for (i = 0; i < len; i++)
 	       glutBitmapCharacter(j,string[i]);
     glFlush();
    // for(int k = 0; k < 50000000; k++); // delay
   }
  glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glutMainLoop();
return 0;}








