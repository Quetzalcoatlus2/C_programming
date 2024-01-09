/*
 * 1.c
 *
 *  Created on: 11 mar. 2022
 *      Author: teodo
 */
#include<stdio.h>
#include<stdlib.h>
int main(){

	int i, n;
	int note[30];
	int noteMaximeViteza[30];
	int *noteMaximeMemorie;
	int j;
	int suma=0;
	int notaMaxima, notaMinima;
	int nrNoteMaxime = 0;
	float media;


	printf("Cate note doriti sa introduceti (max 30)?\n");
	fflush(stdout);
	scanf("%d", &n);

	if(n > 30){
		printf("Prea multe note!!!!\n");
		return 1;
	}

	printf("Introduceti cele %d note:\n", n);
	for(i = 0; i < n; i++){

		printf("Nota %d: ", i + 1);
		fflush(stdout);
		scanf("%d", &note[i]);
	}

	for(i=0; i<n; i++){
		suma+=note[i];
	}




	media = (float)suma / n;
	printf("Media notelor este: %.2f.\n", media);


	// determinarea notei maxime si minime
	notaMaxima = notaMinima = note[0];
	for(i = 1; i < n; i++){
		if(notaMaxima < note[i])
			notaMaxima = note[i];
		if(notaMinima > note[i])
			notaMinima = note[i];
	}
	//determinam numarul de note maxime
	for(i = 0; i < n; i++)
		if(notaMaxima == note[i]){
			noteMaximeViteza[nrNoteMaxime] = i;
			nrNoteMaxime++;
		}
	printf("Notele maxime sunt pe pozitiile: ");
	for(i = 0; i < nrNoteMaxime; i++)
		printf("%d ", noteMaximeViteza[i] + 1);


	// optimizare memorie. alocare dinamica
	noteMaximeMemorie = (int*) malloc(sizeof(int) * nrNoteMaxime);
	j = 0;
	for(i = 0; i < n; i++){
		if(notaMaxima == note[i]){
			noteMaximeMemorie[j] = i;
			j++;
		}
	}

	printf("\n(v2)Notele maxime sunt pe pozitiile: ");
		for(i = 0; i < nrNoteMaxime; i++)
			printf("%d ", noteMaximeViteza[i] + 1);

	printf("Nota maxima din set este: %d.\n", notaMaxima);
	printf("Nota minima din set este: %d.\n", notaMinima);



	return 0;
}



