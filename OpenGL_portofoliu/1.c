/*                                      10. Modul grafic
 *
 * Realizati un proiect ce va afisa in modul grafic un dreptunghi
 * al carui inaltime este corespunzatoare
 * unui numar intreg cuprins intre 0 si 100 introdus de la tastatura.
 */
#include<stdio.h>
#include<GL/glut.h>
int a;

void display() {

	glClearColor(1.0f,1.0f,1.0f,0.05f);
	glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_QUADS);
		glColor3f(0.0f, 0.5f, -1.0f);
		glVertex2f(-0.1, -1.0f);
		glVertex2f(0.1, -1.0f);
		glVertex2f(0.1, -1.0f+(float)a/50);
		glVertex2f(-0.1, -1.0f+(float)a/50);
		glEnd();



	glFlush();
}
int main(int argc, char** argv){
glutInit(&argc, argv);
printf("Introduceti un numar intreg de la 0 la 100 "
		"corespunzator inaltimii unui dreptunghi:");
fflush(stdout);
scanf("%d",&a);
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}









