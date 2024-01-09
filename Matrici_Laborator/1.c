/*
 * 1.c
 *
 *  Created on: 15 mar. 2022
 *      Author: teodo
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

	int valori[20][30];
	int i, j;
	int cols = 30, lines = 20;
	int max, nrMax = 0;
	int sLinie;

	srand(time(NULL));

	for(i = 0; i < lines; i++){
		for(j = 0; j < cols; j++){
			valori[i][j] = rand() % 1000 - 500;
			printf("%5d ", valori[i][j]);
		}
		printf("\n");
	}

	// determinare maxim matrice
	max = valori[0][0];
	for(i = 0; i < lines; i++)
		for(j = 0; j < cols; j++)
				if(valori[i][j] > max)
					max = valori[i][j];
	printf("\nmax = %d ", max);

	// numarul de aparitii al lui max
	for(i = 0; i < lines; i++)
		for(j = 0; j < cols; j++)
			if(valori[i][j] == max)
				nrMax++;

	printf("(%d %s)\n", nrMax, nrMax == 1?"data":"ori");

	// media pe fiecare linie
	for(i = 0; i < lines; i++){
		sLinie = 0;
		for(j = 0; j < cols; j++)
			sLinie += valori[i][j];
		printf("Media pe linia %2d este: %7.2f\n", i, (float) sLinie / cols);
	}






	return 0;
}


