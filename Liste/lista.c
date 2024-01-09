/*
 * lista.c
 *
 *  Created on: 16 mai 2022
 *      Author: bogdan
 */
#include <stdio.h>
#include <malloc.h>
#include "lista.h"
void insert(int v){
nod* actual = (nod*)malloc(sizeof(nod));
actual->val = v;
actual->urm = start;
start = actual;
}
void adauga(int v){
nod* viziteaza = start;
nod* actual = (nod*)malloc(sizeof(nod));
actual->val = v;
actual->urm = NULL;
while(viziteaza->urm!=NULL)
viziteaza = viziteaza->urm;
viziteaza->urm = actual;
}
void afiseaza(){
nod* viziteaza = start;
while(viziteaza != NULL){
printf("%d ->",viziteaza->val);
viziteaza = viziteaza->urm;
}
printf("NULL\n");}

