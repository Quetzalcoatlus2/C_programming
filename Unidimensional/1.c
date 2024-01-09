/*
 * 1.c
 *
 *  Created on: 6 mar. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int i, x[50],n;
	printf("Dati n:");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{printf("Dati x[%d]=",i);
	fflush(stdout);
	scanf("%d",&x[i]);
	}
	for(i=0; i<n; i++)
		printf("x[%d]=%d\n",i,x[i]);
	return 0;
}

