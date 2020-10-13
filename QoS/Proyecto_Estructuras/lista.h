#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#define ASCENDENTE 1
#define DESCENDENTE 0
class lista {
   public:
    lista();
    ~lista();

    void Insertar(Paquete v);
    void Borrar(Paquete v);
    bool ListaVacia();
    void Mostrar(Paquete);
    void MostrarLIsta();
    void Siguiente();
    void Anterior();
    void Primero();
    void Ultimo();
    bool Actual();
    Paquete ValorActual();


   private:
    pnodo plista;
};

#endif // LISTA_H
