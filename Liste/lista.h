/*
 * lista.h
 *
 *  Created on: 16 mai 2022
 *      Author: bogdan
 */

#ifndef LISTA_H_
#define LISTA_H_

struct Nod{
int val;
struct Nod* urm;
} *start;
typedef struct Nod nod;

//adauga la inceput
void insert(int v);
//adauga la sfarsit
void adauga(int v);
void afiseaza();



#endif /* LISTA_H_ */
