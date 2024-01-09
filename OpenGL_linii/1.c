/*Scrieti un program care va citi de la tastaturã un numãr întreg si
 * va afisa pe ecran numãrul respectiv de linii paralele, echidistante:
-	Verticale, în cadranul (1/4 din ecran) dreapta sus
-	Diagonale
 */
#include <windows.h> // nu se copiaza pe linux
#include <GL/glut.h>
void display(){
	int i, n=30;
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.0f, 1.0f);
		for(i=1; i<n+1; i++){
			glVertex2f(0.0f, 0.99f*i/n);
			glVertex2f(1.0f, 0.99f*i/n);
		}
		glEnd();


glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
	for(i=1; i<n+1; i++){
		glVertex2f(-1.0f, -1.0f+1.0f*i/n);
		glVertex2f(-1.0f+1.0f*i/n, -1.0f);
	}
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



















