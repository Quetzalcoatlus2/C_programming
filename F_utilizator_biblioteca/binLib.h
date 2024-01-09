/*
 * binLib.h
 *
 *  Created on: 22 apr. 2022
 *      Author: teodo
 */

#include<stdlib.h>


#ifndef BINLIB_H_
#define BINLIB_H_

char * decTo8Bin(int decNumber, char * sirBinar){
	int nrBiti = 7;
	//int decNumberCopy = decNumber;

	sirBinar[nrBiti + 1]='\0';
	while(nrBiti >= 0){
		//"yyyyyyyy"
		sirBinar[nrBiti] = decNumber % 2 + '0';
		nrBiti--;
		decNumber /= 2;
	}
	//printf("%d = b%s\n", decNumberCopy, sirBinar);

	return sirBinar;
}

char * decToNBin(int decNumber, int N, char * sirBinar){
	int nrBiti = N;
	sirBinar = (char *)malloc(N + 1);

	sirBinar[nrBiti]='\0';

	while(nrBiti > 0){
		sirBinar[nrBiti - 1] = decNumber % 2 + '0';
		nrBiti--;
		decNumber /= 2;
	}

	return sirBinar;
}





#endif /* BINLIB_H_ */
