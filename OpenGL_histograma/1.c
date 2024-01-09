/*
 * 1.c
 *
 *  Created on: 10 mai 2022
 *      Author: bogdan
 */
#include <windows.h>
#include <GL/glut.h>
void display() {
   int v[] = {5,3,10,19,2,6};
   int i;
   glClearColor(1.0f, 1.0f, 1.0f, 0.5f);
   glClear(GL_COLOR_BUFFER_BIT);
   for(i = 0; i < 6; i++){
	   glBegin(GL_QUADS);
	   glColor3f(0.0f, i/5.0f, 1.0f);
	   glVertex2f(-0.8+i*0.25, -0.5);
	   glVertex2f(-0.8+i*0.25+0.22, -0.5);
	   glVertex2f(-0.8+i*0.25+0.22, -0.5+v[i]/10.0);
	   glVertex2f(-0.8+i*0.25, -0.5+v[i]/10. );
	   glEnd();
	   // afisare etichete text
          glRasterPos2f(-0.8+i*0.25+0.08,-0.5+v[i]/10.+0.05);
	   glutBitmapCharacter(2,v[i]+'0');
    }
  glFlush();
}

int main(int argc, char** argv){
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Histograma OpenGL ");
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}





