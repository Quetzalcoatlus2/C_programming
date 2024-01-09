/*
 * 1.c
 *
 *  Created on: 25 feb. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int a,b,n5,n7,n9;
	printf("Introduceti cele doua note:");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	n5=14-a-b;
	n7=20-a-b;
	n9=26-a-b;
	if(n5>1&&n5<11)
		printf("Ar trebui sa mai iei un %d ca sa iasa media 5.\n",n5);
	else
		if(n5>10)
			printf("Avand notele %d si %d, media 5 nu mai poate fi obtinuta.\n",a,b);
		else
			printf("Media 5 este deja garantata oricare ar fi a treia nota.\n");
	if(n7>1&&n7<11)
		printf("Ar trebui sa mai iei un %d ca sa iasa media 7.\n",n7);
	else
		if(n7>10)
			printf("Avand notele %d si %d, media 7 nu mai poate fi obtinuta.\n",a,b);
		else
		    printf("Media 7 este deja garantata oricare ar fi a treia nota.\n");
	if(n9>1&&n9<11)
	    printf("Ar trebui sa mai iei un %d ca sa iasa media 9.\n",n9);
	else
	    if(n9>10)
		    printf("Avand notele %d si %d, media 9 nu mai poate fi obtinuta.",a,b);
		else
			printf("Media 9 este deja garantata oricare ar fi a treia nota.");

	return 0;
}

