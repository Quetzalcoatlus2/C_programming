/*
 * 1.c
 *
 *  Created on: 3 mai 2022
 *      Author: bogdan
 */


#include<stdio.h>



void swipeInt(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

// n = 10
// 0 1 2 3 4 5 6 7 8 9

void reverseArray(int *v, int n){
	int i;
	for(i = 0; i < n / 2; i++ ){
		swipeInt(&v[i], &v[n - 1 - i]);
	}
}

void reverseArrayR(int *v, int current, int n){
	swipeInt(v + current, v + n - 1 - current);
	if (current >= n / 2 - 1)
		return;
	else
		reverseArrayR(v, current + 1, n);
}


void listArray(int v[], int n){
	int i = 0;
	printf("************************\n");
	for(i = 0; i < n; i++)
		printf("%d, ", v[i]);
	printf("\n************************\n");
}

int main(){



	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int n = 8;

//	printf("x = %d\ny = %d\n", x, y);
//
//	powOf2(&x, &y);
//
//	printf("x = %d\ny = %d\n", x, y);
//



	listArray(arr, n);
	reverseArray(arr, n);
	listArray(arr, n);

	reverseArrayR(arr, 0, n);
	listArray(arr, n);


	return 0;
}

