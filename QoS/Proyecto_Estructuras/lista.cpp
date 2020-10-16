#include "lista.h"

lista::lista(): plista(NULL)
{
    //ctor
}

bool lista::Actual() { return plista != NULL; }
Paquete* lista::ValorActual() { return plista->valor; }
bool lista::ListaVacia() { return plista == NULL; }

lista::~lista()
{
   pnodo aux;

   Primero();
   while(plista) {
      aux = plista;
      plista = plista->siguiente;
      delete aux;
   }
}

void lista::Insertar(Paquete* v)
{
   pnodo nuevo;

   Primero();
   // Si la lista está vacía
   if(ListaVacia()) {
      // Asignamos a lista un nuevo nodo de valor v y
      // cuyo siguiente elemento es la lista actual
      nuevo = new nodo(v, plista);
      if(!plista) plista = nuevo;
      else plista->anterior = nuevo;
   }
   else {
      // Buscar el nodo de valor menor a v
      // Avanzamos hasta el último elemento o hasta que el siguiente tenga
      // un valor mayor que v
      while(plista->siguiente) Siguiente();
      // Creamos un nuevo nodo después del nodo actual
      nuevo = new nodo(v, plista->siguiente, plista);
      plista->siguiente = nuevo;
      if(nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
   }
}

void lista::Borrar(int v)
{
    try {
        if (ListaVacia()) {
            std::cout << "Lista vacia\n";
        }
        else {
            Ultimo();
            pnodo nodo = plista;

            int id = nodo->valor->getId();
            do {

                id = nodo->valor->getId();
                if (id == v) {

                    pnodo ante = nodo->siguiente;
                    if (nodo->anterior) // no es el primer elemento
                        nodo->anterior->siguiente = nodo->siguiente;
                    if (nodo->siguiente) // no el el ?ltimo nodo
                        nodo->siguiente->anterior = nodo->anterior;
                    delete nodo->valor;
                    nodo = ante;
                    std::cout << "****Solicitud eliminada****\n\n\n";

                }
                else
                {
                    nodo = nodo->anterior;
                }

            } while (id != v && nodo != nullptr);
        }
    }
    catch (const std::out_of_range& e)
    {
        std::cout << e.what();
    }

}

void lista::Mostrar(int orden)
{
    pnodo nodo;
    if (orden == ASCENDENTE) {
        Primero();
        nodo = plista;
        while (nodo) {
            std::cout << nodo->valor->toStringPaquete() << "\n";
            nodo = nodo->siguiente;
        }
    }
    else {
        Ultimo();
        nodo = plista;
        while (nodo) {
            std::cout << nodo->valor->toStringPaquete() << "\n";
            nodo = nodo->anterior;
        }
    }
    cout << endl;
}



void lista::Siguiente()
{
   if(plista) plista = plista->siguiente;
}

void lista::Anterior()
{
   if(plista) plista = plista->anterior;
}

void lista::Primero()
{
   while(plista && plista->anterior) plista = plista->anterior;
}

void lista::Ultimo()
{
   while(plista && plista->siguiente) plista = plista->siguiente;
}
