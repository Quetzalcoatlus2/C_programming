#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <string.h>
#include <windows.h>
int tmega=0,tfocus=0,sel,tmp1;
float sortmega[8],sortburst[8];
float burst=0;


struct CAMERA
{
    char cam[20];
    int mega;
    int card;
    int iso;
    float fps;
    float diag;
    int focus;
    int batery;
    float burst;
};

int main(int argc, char** argv)
{
    struct CAMERA p[8];
    FILE *f;
    int i=0,j;
    f=fopen("camere.txt","r");
    if(!f)
        printf("Eroare la deschiderea fisierului !");
    printf("Fisier Valid. Urmeaza afisare de valori dn fisier ! Se va creea un nou fisier file_out.txt in care se va afisa numarul total de megapixeli si numarul total puncte de focalizare");
    while(fscanf(f,"%s%d%d%d%f%f%d%d",p[i].cam,&p[i].mega,&p[i].card,&p[i].iso,&p[i].fps,&p[i].diag,&p[i].focus,&p[i].batery) !=EOF)
{   printf("\n ->Model Camera:%s \n*Megapixeli:%d \n*Nr Slot-uri de card:%d \n*Valoare ISO Max:%d \n*Nr. Cadre pe secunda:%.1f \n*Diagonala ecran:%.1f \n*Nr Puncte de focalizare:%d \n*Nr Cadre per baterie:%d\n",p[i].cam,p[i].mega,p[i].card,p[i].iso,p[i].fps,p[i].diag,p[i].focus,p[i].batery);

    p[i].burst=p[i].batery/p[i].fps;
    tmega=tmega+p[i].mega;
    tfocus=tfocus+p[i].focus;

    sortmega[i]=p[i].mega;
    burst=p[i].burst;
    i=i+1;
}

    printf("Sortarea datelor: Va rugam Selectati o optiune: \n1) pentru a sorta dupa numarul de Megapixeli \n2) Pentru a sorta dupa timpul maxim  de functionare in rafala cu o singura baterie");
    fflush(stdout);
    scanf("%d",&sel);
    if(sel==1)
{
        for(i=0;i<8;i=i+1)
        for(j=0;j<8;j=j+1)
            if(sortmega[i]> sortmega[j])
{               tmp1= sortmega[i];
                sortmega[i]= sortmega[j];
                sortmega[j]=tmp1;
}
}
    if(sel==2)
{
        for(i=0;i<8;i=i+1)
        for(j=0;j<8;j=j+1)
            if(sortburst[i]> sortburst[j])
{               tmp1= sortburst[i];
                sortburst[i]= sortburst[j];
                sortburst[j]=tmp1;
}
}

    FILE *w;
    w=fopen("file_out.txt","w");
    if(!w)
        printf("Fisierul nu se poate creea! Eroare !");
    fprintf(w,"Numarul de Megapixeli total al tuturor camerelor este: %d\n",tmega);
    fprintf(w," Numarul de Puncte de focalizare total al tuturor camerelor este: %d\n",tfocus);


    void display() {
    char camer[10];
    int i,q;
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    for(i = 0; i < 8; i=i+1){
        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.94 + i*0.2, -0.5);
        glVertex2f(-0.94+ i*0.2+0.1 , -0.5);
        glVertex2f(-0.94 +i*0.2+0.1, -0.5 + p[i].mega/50. );
        glVertex2f(-0.94 + i*0.2, -0.5 + p[i].mega/50. );
        glEnd();
        sprintf(camer,"%d",p[i].mega);
                glRasterPos2f(-0.935+ i*0.2 + 0.04 , -0.4 + p[i].mega/50.);
               for(q = 0; q < strlen(camer); q++)
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,camer[q]);
               glRasterPos2f(-0.95 + i*0.2 + 0.031 , -0.6);
               for(q = 0; q < strlen(p[i].cam); q++)
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,p[i].cam[q]);

    }
    glFlush();
    }
    printf("Date inregistrate in fisier cu succes !");
    fclose(w);
    glutInit(&argc, argv);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Numar Megapixeli ");
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(0,0);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}






