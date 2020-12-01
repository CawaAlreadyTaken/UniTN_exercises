#include "152.queue_int.h"

static coda Q;

static bool vuota() {
  return (Q.head == NULL);
}



void init_q() {
  Q.head = NULL;
}


bool enqueue(int n) {
  
    bool risultatoOperazione;
    lista_q nuovoNodo = new nodo_q;
    if (nuovoNodo==NULL) {
        risultatoOperazione = false;
    }
    else {
        nuovoNodo->nome=n;
        nuovoNodo->next=NULL;
        if (vuota()) {
            Q.head=nuovoNodo;
        }
        else { 
            Q.tail->next=nuovoNodo;
        }
        Q.tail=nuovoNodo;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}


bool first(int &n) { 
    bool risultatoOperazione;
    if (vuota()) {
        risultatoOperazione = false;
    }
    else {
        n = Q.head->nome;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}


bool dequeue() { 
    bool risultatoOperazione;
    if (vuota()) {
        risultatoOperazione = false;
    }
    else {
        lista_q primoNodo;
        primoNodo = Q.head;
        Q.head = Q.head->next;
        delete primoNodo; 
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}


void print() {

  if (!vuota()) {
    lista_q nodoCorrente=Q.head;
    do {
      cout << nodoCorrente->nome << endl;
      nodoCorrente = nodoCorrente->next;
    } while (nodoCorrente != NULL);
  }
}

