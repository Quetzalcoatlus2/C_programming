
#include <stdio.h>
int main() {
   char cnp[14];
   char cnp0, cnp1, cnp2,cnp3,cnp4,cnp5,cnp6;
   int cifra1An;
   int cifra2An;
   int cifra1Luna;
   int cifra2Luna;
   int cifra1Zi;
   int cifra2Zi;
   int anNastere, lunaNastere, ziNastere,sex,anCurent;

   printf("Introduceti cnp-ul:");
   fflush(stdout);
   scanf("%s", cnp);
   printf("Introduceti anul curent:");
   fflush(stdout);
   scanf("%d",&anCurent);

   cnp0=cnp[0],cnp1 = cnp[1]; cnp2 = cnp[2];cnp3=cnp[3];cnp4=cnp[4];cnp5=cnp[5];cnp6=cnp[6];
   sex=cnp0-'0';
   cifra1An = cnp1 - '0'; // cifra zecilor
   cifra2An = cnp2 - '0'; // cifra unitatilor
   cifra1Luna= cnp3- '0';
   cifra2Luna= cnp4- '0';
   cifra1Zi= cnp5- '0';
   cifra2Zi= cnp6- '0';
   anNastere = cifra1An * 10 + cifra2An;
   lunaNastere = cifra1Luna * 10 + cifra2Luna;
   ziNastere = cifra1Zi * 10 + cifra2Zi;



   if(sex<3)
	   anNastere=anNastere+1900;

   else
	   anNastere=anNastere+2000;

   printf("Data nasterii este %d:%d:%d.\n",ziNastere,lunaNastere,anNastere);

   if(sex%2==1)
  	   printf("Sexul este masculin.\n");
     else
  	   printf("Sexul este feminin.\n");

   if(anCurent-anNastere>=18)
	   printf("Major");
   else
	   printf("Minor");
   if(sex%2==1)
	   printf(".\n");
   else
	   printf("a.\n");

   return 0;
}
