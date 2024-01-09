#include<stdio.h>
#include<string.h>
#include<GL/glut.h>
int main(int argc, char** argv){

	struct animale {
		char tip[20];
		char rasa[30];
		char SexLaPredare[20];
		char TipPrimire[20];
		int varsta;
		int lifespan;
		int CostIntretinere;

	};
	struct animale animal[20],aux;

	int n,i,flag=0,mascul=0,femela=0,maidanez=0,predat=0,necunoscut=0,cost=0;


	FILE *animale;
	animale=fopen("date.txt", "r");
	fscanf(animale, "%d", &n);
	printf("Datele citite din fisier sunt:\n\n");
	for(i=0;i<n;i++){
		fscanf(animale, "%s%s%s%s%d%d%d", animal[i].tip,animal[i].rasa,animal[i].SexLaPredare,animal[i].TipPrimire,&animal[i].varsta,&animal[i].lifespan,&animal[i].CostIntretinere);
		printf("Animal %d:%s %s\n",i+1,animal[i].tip,animal[i].rasa);
		printf("Sex la predare:%s          Tip primire:%s\n",animal[i].SexLaPredare,animal[i].TipPrimire);
		printf("Varsta:%d ani           Speranta medie de viata:%d ani      Cost intretinere anual:%d lei\n\n",animal[i].varsta,animal[i].lifespan,animal[i].CostIntretinere);
	}

	printf("\nNumerele estimative de ani pe care animalelele le mai au de trait sunt:\n\n");
	for(i=0;i<n;i++){
		printf("Animalul %d(%s %s) mai are de trait aproximativ %d ani.\n",i+1,animal[i].tip,animal[i].rasa,animal[i].lifespan-animal[i].varsta);
	}

	do{
		flag=0;
		for(i=0;i<n-1;i++)
			if(animal[i].varsta>animal[i+1].varsta){
				aux=animal[i];
				animal[i]=animal[i+1];
				animal[i+1]=aux;
				flag=1;}

	}while(flag!=0);

	printf("\nAnimalele in ordine crescatoare a varstei sunt:\n\n");
	for(i=0;i<n;i++)
		printf("Animalul %d(%s %s) are %d ani.\n",i+1,animal[i].tip,animal[i].rasa,animal[i].varsta);

	FILE *animale1;
	animale1=fopen("date1.txt","w");
	for(i=0;i<n;i++)
	    fprintf(animale1,"%s %s %d ani ramasi de trait\n",animal[i].tip,animal[i].rasa,animal[i].lifespan-animal[i].varsta);

	for(i=0; i<n; i++){
		if(strcmp(animal[i].SexLaPredare,"mascul")==0)
			mascul=mascul+1;
		else
			if(strcmp(animal[i].SexLaPredare,"femela")==0)
			    femela=femela+1;
			else
				necunoscut=necunoscut+1;
		if(strcmp(animal[i].TipPrimire,"maidanez")==0)
			maidanez=maidanez+1;
		else
			predat=predat+1;
	}



	fprintf(animale1,"\nDin cele %d animale, %d sunt masculi, %d sunt femele si pentru %d nu s-a putut identifica sexul la primire.\n",n,mascul,femela,necunoscut);
	fprintf(animale1,"Din cele %d animale, %d sunt maidanezeze si %d au fost predate de proprietarii lor.\n",n,maidanez,predat);



int costuri(int a,int b,int c)
{ int cost=0;
	cost+=a*(b-c);
return cost;}

for(i=0;i<n;i++)
    cost+=costuri(animal[i].CostIntretinere,animal[i].lifespan,animal[i].varsta);



printf("Suma medie de bani de care centrul are nevoie pentru a intretine animalele pentru restul vietilor lor este %d lei.",cost);
fprintf(animale1,"Suma medie de bani de care centrul are nevoie pentru a intretine animalele pentru restul vietilor lor este %d lei.",cost);

void display() {
	int i,j;
	char text[5];

	glClearColor(1.0f,1.0f,1.0f,0.05f);
	glClear(GL_COLOR_BUFFER_BIT);
	for(i=0;i<n;i++){
		glBegin(GL_QUADS);
		glColor3f(0.0f, i/5., -1.0f);
		glVertex2f(-0.99+i*0.2,-0.5);
		glVertex2f(-0.99+i*0.2+0.18,-0.5);
		glVertex2f(-0.99+i*0.2+0.18,-0.5+animal[i].varsta/10.);
		glVertex2f(-0.99+i*0.2,-0.5+animal[i].varsta/10.);
		glEnd();
		glRasterPos2f(-0.95+i*0.2+0.05,-0.5+animal[i].varsta/10.+0.05);
		sprintf(text,"%d",animal[i].varsta);
		for(j=0;j<strlen(text);j++)
			glutBitmapCharacter(GLUT_BITMAP_8_BY_13,text[j]);

		glRasterPos2f(-0.98+i*0.2+0.05,-0.6);
		for(j=0;j<strlen(animal[i].rasa);j++)
			glutBitmapCharacter(GLUT_BITMAP_8_BY_13,animal[i].rasa[j]);

	}
	glFlush();
}



glutInit(&argc, argv);
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glutMainLoop();

fclose(animale);
fclose(animale1);


	return 0;
}


