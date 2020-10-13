#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;


class nodo {
   public:
    nodo(int v, nodo *sig = NULL, nodo *ant = NULL) :
       valor(v), siguiente(sig), anterior(ant) {}

   private:
    int valor;
    nodo *siguiente;
    nodo *anterior;

   friend class lista;
};

typedef nodo *pnodo;

#endif // NODO_H
