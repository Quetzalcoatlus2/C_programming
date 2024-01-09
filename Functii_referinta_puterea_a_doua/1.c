/*
 * 1.c
 *
 *  Created on: 3 mai 2022
 *      Author: bogdan
 */

#include<stdio.h>

void powOf2(int *, int *);

int main()  {

	int x,y;
	printf("Introduceti x si y:");
	fflush(stdout);
	scanf("%d%d", &x, &y);
	printf("x=%d\ny=%d\n", x, y);

	powOf2(&x, &y);
	printf("x^2=%d\ny^2=%d", x, y);
	return 0;
}

void powOf2(int *ad1, int *ad2){
	*ad1=*ad1* *ad1;
	*ad2=*ad2* *ad2;
}
