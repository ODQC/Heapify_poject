#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include"Paquete.h"
#define ASCENDENTE 1
#define DESCENDENTE 0
class lista {
   public:
    lista();
    ~lista();

    void Insertar(Paquete* v);
    void Borrar(int v);
    bool ListaVacia();
    void Mostrar(int orden);
    void Siguiente();
    void Anterior();
    void Primero();
    void Ultimo();
    bool Actual();
    void heapify_down(pnodo actual);
    void heapify_up(pnodo actual);
    Paquete* top();
    void pop();
    int getSize();
    int getIndex(pnodo index);
    void swap(pnodo a, pnodo b);
  
    Paquete* ValorActual();
   
    


   private:
    pnodo plista;
};

#endif // LISTA_H
