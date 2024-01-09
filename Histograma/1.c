/*
 */

#include<stdio.h>
int main() {
	int i;
	int j;
	int n;
	int h[10]={0};
	int note[]={6,7,4,3,6,8,9,7,5,1,2,1,3,4,1,5,6,7,6,9,3,2,1};
	n=sizeof(note)/sizeof(int);
	printf("Numarul de note este %d.\n",n);
    for(i=0; i<n; i++)
	h[note[i]-1]++;

    for(j=0; j<9; j++){
    printf("%d: ",j+1);

    for(i=0; i<h[j]; i++)

    	printf("* ");
printf("\n");
    }
	return 0;
}
