/*
 * 1.c
 *
 *  Created on: 25 feb. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int a,b;
	printf("Introduceti cele doua numere cuprinse intre 1 si 99:");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	if(a<10&&b<10)
	    if(a*10+b>b*10+a)
		    {printf("Maximul este %d.\n",a*10+b);
	         printf("Minimul este %d.",b*10+a);}
	else
		    {printf("Maximul este %d.\n",b*10+a);
			 printf("Minimul este %d.",a*10+b);}
	else
		if(a<10)
			if(a*100+b>b*10+a)
					{printf("Maximul este %d.\n",a*100+b);
				     printf("Minimul este %d.",b*10+a);}
		    else
					{printf("Maximul este %d.\n",b*10+a);
					 printf("Minimul este %d.",a*100+b);}
	else
		if(b<10)
			if(a*10+b>b*100+a)
					{printf("Maximul este %d.\n",a*10+b);
				     printf("Minimul este %d.",b*100+a);}
		    else
					{printf("Maximul este %d.\n",b*100+a);
					 printf("Minimul este %d.",a*10+b);}
	else
		    if(a*100+b>b*100+a)
				    {printf("Maximul este %d.\n",a*100+b);
					 printf("Minimul este %d.",b*100+a);}
			else
					{printf("Maximul este %d.\n",b*100+a);
					 printf("Minimul este %d.",a*100+b);}

	return 0;
}

