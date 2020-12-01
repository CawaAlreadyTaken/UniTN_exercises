#ifndef CODA_H
#define CODA_H

#include <iostream>
using namespace std;

struct nodo_q {
	int nome;
	nodo_q* next;
};
typedef nodo_q* lista_q;

struct coda {
    lista_q tail;
    lista_q head;
};

void init_q();
bool enqueue(int);
bool first(int &);
bool dequeue();
void print ();

#endif




