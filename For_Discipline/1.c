/*
 * 1.c
 *
 *  Created on: 3 mar. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int i, j, n, nota, suma, nrDisciplinePromovate, nrStudenti;
	float media;
	printf("Introduceti numarul de discipline:");
	fflush(stdout);
	scanf("%d",&n);
	printf("Introduceti numarul de studenti:");
		fflush(stdout);
		scanf("%d",&nrStudenti);
	for(j=0; j<nrStudenti; j++)
	{

		suma=0;
		nrDisciplinePromovate=0;
		printf("Introduceti notele studentului %d:\n",j+1);
		for(i=0; i<n; i++)


	{printf("Nota %d este ",i+1);
	fflush(stdout);
	scanf("%d.",&nota);

	if(nota>4)
		{suma+=nota;
	    nrDisciplinePromovate++;}
	}
	 media=(float)suma/nrDisciplinePromovate;
	printf("Studentul %d a promovat %d discipline si media acestora este %.2f.\n",
			j+1 , nrDisciplinePromovate, media);}



	return 0;
}

