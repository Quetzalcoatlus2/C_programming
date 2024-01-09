/*
 * Model_Test.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main() {
	char producator1[20], producator2[20];
	int majorare1,majorare2;
	float pret1,pret2,diferenta;
	printf("Introduceti primul laptop(producator, pret, majorare):");
	fflush(stdout);
	scanf("%s %f %d",producator1,&pret1,&majorare1);
	printf("Introduceti al doilea laptop(producator, pret, majorare):");
	fflush(stdout);
	scanf("%s %f %d",producator2,&pret2,&majorare2);
	pret1=pret1+pret1*majorare1/100;
	pret2=pret2+pret2*majorare2/100;
	diferenta=pret2-pret1;


	printf("Primul laptop:%s %f RON.\n",producator1,pret1);
	printf("Al doilea laptop:%s %f RON.\n",producator2,pret2);
	printf("Diferenta este:%f",diferenta);
	return 0;
}
