/*
 * 1.c
 *
 *  Created on: 13 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	char telefon[11]="0111348673";
	int operator, oras;
	/*printf("Introduceti numarul de telefon:");
	fflush(stdout);
	scanf("%s",telefon);*/
	printf("Introduceti numarul corespunzator operatorului:");
	fflush(stdout);
	scanf("%d",&operator);
	printf("Introduceti numarul corespunzator orasului:");
	fflush(stdout);
	scanf("%d",&oras);
	if (operator==1)
		telefon[1]='2';
	else
		if (operator==2)
			telefon[2]='3';
		else
			{printf("Operator inexistent!");
			return 0;
			}
	telefon[2]=oras/10+'0';
	telefon[3]=oras%10+'0';
	printf("Numarul de telefon este: %s",telefon);



	return 0;
}

