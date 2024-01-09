/*Considerând numele de familie a trei studenti sã se scrie un program care va citi
 * de la tastaturã datele si va afisa studentii în ordine alfabeticã.
 * Programul va modifica toate datele introduse astfel încât doar prima literã sã fie majusculã.
 */
#include<stdio.h>
#include<string.h>
int main() {
	int i;
	int j;
	int a;
	int b;
	int c;
	struct nume {

	char nume[20];}t[3];


	printf("Introduceti numele de familie al primului student:");
	fflush(stdout);
	scanf("%s", t[0].nume);

	printf("Introduceti numele de familie al celui de-al doilea student:");
	fflush(stdout);
	scanf("%s", t[1].nume);

	printf("Introduceti numele de familie al celui de-al treilea student:");
	fflush(stdout);
	scanf("%s", t[2].nume);

	for(i=0; i<3; i++){
		if(t[i].nume[0]>='a' && t[i].nume[0]<='z')
			t[i].nume[0]-=32;

		for(j=1; j<strlen(t[i].nume); j++){
			if(t[i].nume[j]>='A' && t[i].nume[j]<='Z')
						t[i].nume[j]+=32;}
		printf("Numele cu prima litera majuscula si restul literelor minuscule este: %s\n", t[i].nume);
		}

	a=strcmp(t[0].nume, t[1].nume); //abc acb bac cab - functioneazaa
    b=strcmp(t[1].nume, t[2].nume); // bca cba        - nu functioneaza
    c=strcmp(t[2].nume, t[0].nume);


    if(a<0 && b<0 && c>0)
    	printf("Numele in ordine alfabetica sunt %s %s %s", t[0].nume, t[1].nume, t[2].nume);
    else
    	{if(a<0 && b>0 && c>0)
    		printf("Numele in ordine alfabetica sunt %s %s %s", t[0].nume, t[2].nume, t[1].nume);
    	else
        	{ if(a>0 && b<0 && c<0)
    	    	printf("Numele in ordine alfabetica sunt %s %s %s", t[1].nume, t[2].nume, t[0].nume);
    	    else
    	    { if(a>0 && b<0 && c>0)
    	            printf("Numele in ordine alfabetica sunt %s %s %s", t[1].nume, t[0].nume, t[2].nume);
    	        else
    	        { if(a<0 && b>0 && c<0)
    	            	printf("Numele in ordine alfabetica sunt %s %s %s", t[2].nume, t[0].nume, t[1].nume);
    	            else
    	            { if(a>0 && b>0 && c<0)
    	                	printf("Numele in ordine alfabetica sunt %s %s %s", t[2].nume, t[1].nume, t[0].nume);

    	}}}}}


	return 0;
}

