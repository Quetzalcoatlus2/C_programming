/*
 * 1.c
 *
 *  Created on: 12 mar. 2022
 *      Author: teodo
 */


#include<stdio.h>
int main() {
	char v[9]="123456789";
	char a[9]={0};
	int var;
	int i;
	int j;
	int jucator=0;
	printf("............. \n");
	printf("| ");

	for(i=0; i<3; i++)
		printf("%c | ",v[i]);
	printf("\n");
	printf("............. \n");
	printf("| ");

	for(i=3; i<6; i++)
		printf("%c | ",v[i]);
	printf("\n");
	printf("............. \n");
	printf("| ");

	for(i=6; i<9; i++)
		printf("%c | ",v[i]);
	printf("\n");
	printf("............. \n");



	for(j=0; j<9; j++){
		if(jucator==0)
		   {printf("Jucatorul 1 alege:");
		    fflush(stdout);
		    scanf("%d",&var);
		    v[var-1]=40+'0';

		    if(a[var-1]!=0)
		       { printf("Miscare nevalida!!!");
		         return 1;}
		    a[var-1]=var;
		    jucator=1;}
	else
		{printf("Jucatorul 2 alege:");
		 fflush(stdout);
		 scanf("%d",&var);
		 v[var-1]='0';

		 if(a[var-1]!=0)
		    { printf("Miscare nevalida!!!");
			  return 1;}
		 a[var-1]=var;
	     jucator=0;}


	if(var==0)
		 {printf("Introduceti o cifra diferita de 0 corespunzatoare miscarii dorite.");
		  return 1;}
	else{


	printf("............. \n");
	printf("| ");

	for(i=0; i<3; i++)
		printf("%c | ",v[i]);
	printf("\n");
	printf("............. \n");
	printf("| ");

	for(i=3; i<6; i++)
		printf("%c | ",v[i]);
	printf("\n");
	printf("............. \n");
	printf("| ");

	for(i=6; i<9; i++)
		printf("%c | ",v[i]);
	printf("\n");
	printf("............. \n");

    if((v[0]==v[1] && v[1]==v[2] && v[2]=='X')||(v[3]==v[4] && v[4]==v[5] && v[5]=='X')||(v[6]==v[7] && v[7]==v[8] && v[8]=='X')||
       (v[0]==v[3] && v[3]==v[6] && v[6]=='X')||(v[1]==v[4] && v[4]==v[7] && v[7]=='X')||(v[2]==v[5] && v[5]==v[8] && v[8]=='X')||
	   (v[0]==v[4] && v[4]==v[8] && v[8]=='X')||(v[2]==v[4] && v[3]==v[6] && v[6]=='X'))
	{printf("Jucatorul 1 a castigat.");
     return 1;}

    else
	    if((v[0]==v[1] && v[1]==v[2] && v[2]=='0')||(v[3]==v[4] && v[4]==v[5] && v[5]=='0')||(v[6]==v[7] && v[7]==v[8] && v[8]=='0')||
	       (v[0]==v[3] && v[3]==v[6] && v[6]=='0')||(v[1]==v[4] && v[4]==v[7] && v[7]=='0')||(v[2]==v[5] && v[5]==v[8] && v[8]=='0')||
		   (v[0]==v[4] && v[4]==v[8] && v[8]=='0')||(v[2]==v[4] && v[3]==v[6] && v[6]=='0'))
		{printf("Jucatorul 2 a castigat.");
	     return 1;}}}




printf("Jocul s-a incheiat.");

	return 0;
}
