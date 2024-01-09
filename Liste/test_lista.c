/*
 * test_lista.c
 *
 *  Created on: 16 mai 2022
 *      Author: bogdan
 */
#include <stdio.h>
#include "lista.h"

int main(){
int i;

insert(4);
adauga(3);
afiseaza();
insert(5);
adauga(7);
afiseaza();
insert(9);
afiseaza();

cautaVal(5);
cautaVal(1);

for(i=0; i<10; i++)
adauga(i*2);
afiseaza();
return 0;}

