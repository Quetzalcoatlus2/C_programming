/*
 * 1.c
 *
 *  Created on: 15 mar. 2022
 *      Author: teodo
 */



#include<stdio.h>
int main(){
	int note[4][7] ={
			{7, 8, 6, 7},
			{8, 10, 6, 8},
			{4, 6, 3, 9}
	};
	int i, j;
	int nLinii = 3, nColoane = 4;
	//int validare;

	int sumaG;
	int sumaP;
	int noteP;
	int sumaS;
	int max;
	float mediaG;
	float mediaP;


//	// citirea dimensiunilor matricei
//	for(validare = 0; validare == 0; ){
//		printf("Introduceti numarul de linii si coloane: ");
//		scanf("%d%d", &nLinii, &nColoane);
//
//		if(nLinii > 4 || nColoane > 7){
//			printf("Depasire dimensiune!!!\n");
//			validare = 0;
//		}
//		else
//			validare = 1;
//	}
//
//	// citirea elementelor matricei
//	for(i = 0; i < nLinii; i++)
//		for(j = 0; j < nColoane; j++){
//			printf("Linia %d, Coloana %d: ", i, j);
//			scanf("%d", &note[i][j]);
//		}



	// afisarea sub forma de matrice
	for(i = 0; i < nLinii; i++){

		// linia antet
		if(i == 0){
			printf("             ");
			for(j = 0; j < nColoane; j++){
						printf("N%d ", j + 1);
					}
		printf(" |  Media \n");
		}

		printf("Semestrul %d: ", i + 1);
		sumaS = 0;
		for(j = 0; j < nColoane; j++){
			printf("%2d ", note[i][j]);
			sumaS += note[i][j];
		}

		printf(" |   %.2f\n", (float) sumaS / nColoane);
	}

	// determinarea valorii medii generale
	sumaG = 0;
	sumaP = 0;
	noteP = 0;

	for(i = 0; i < nLinii; i++)
		for(j = 0; j < nColoane; j++){
			sumaG += note[i][j];
			if(note[i][j] >= 5){
				sumaP += note[i][j];
				noteP++;
			}
		}

	mediaG = (float) sumaG / (nLinii * nColoane);
	printf("Media generala este: %.2f\n", mediaG);

	mediaP = (float) sumaP / noteP;
	printf("Media disciplinelor promovate este: %.2f\n", mediaP);

	// determinarea Maximului pe fiecare coloana
//  ij
//	00 01 02 03
//	10 11 12 13
//	20 21 22 23

	for(j = 0; j < nColoane; j++){
		max = note[0][j];
		for(i = 1; i < nLinii; i++)
			if(max < note[i][j])
				max = note[i][j];
		printf("Valoarea maxima pentru Nota %d este: %d\n", j + 1, max);
	}

// j = 0
// max = note[0][0] = 7
// i = 1
// daca 7 < 8 	max = 8
// i = 2
// daca 8 < 4 ...
// i = 3
// val max pt col 1 este 8


// j = 1


	return 0;
}

