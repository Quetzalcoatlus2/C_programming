/*              2. Instructiuni repetitive suprapuse
 *
 * Realizati un program ce afiseaza toate numerele prime mai mici decat n.
 */
#include<stdio.h>
int main() {
	int n,i,j,prim;
	printf("Dati numarul:");
	fflush(stdout);
	scanf("%d",&n);
	printf("Numerele prime mai mici decat %d sunt:",n);
	for(i=2;i<n;i++)
	{   prim=1;
		for(j=2;j<i/2;j++)
		{if(i%j==0)
			prim=0;}
		if(prim==1)
			printf("%d ",i);
	}
	return 0;
}

