#ifndef NODO_H
#define NODO_H
#include <iostream>
#include "Paquete.h"
using namespace std;


class nodo {
   public:
    nodo(Paquete v, nodo *sig = NULL, nodo *ant = NULL) :
       valor(v), siguiente(sig), anterior(ant) {}

   private:
    Paquete valor;
    nodo *siguiente;
    nodo *anterior;

   friend class lista;
};

typedef nodo *pnodo;

#endif // NODO_H
