/*Scrieti un program care va citi de la tastatura valorile a doua unghiuri
 * ale unui triunghi si va afisa marimea celui de-al treilea unghi.
 */


#include <stdio.h>
int main() {
	float u1,u2,u3;
	printf("Dati masurile celor 2 unghiuri in grade sexagesimale:");
	fflush(stdout);
	scanf("%f %f",&u1,&u2);
	u3=180-u1-u2;
	printf("Al treilea unghi are %.2f grade.",u3);


return 0;}


//ex 12 lab 5/6
