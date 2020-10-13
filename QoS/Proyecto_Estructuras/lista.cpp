#include "lista.h"

lista::lista(): plista(NULL)
{
    //ctor
}

bool lista::Actual() { return plista != NULL; }
    Paquete lista::ValorActual() { return plista->valor; }
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

void lista::Insertar(Paquete v)
{
   pnodo nuevo;

   Primero();
   // Si la lista est� vac�a
   if(ListaVacia() || plista->valor.getId() > v.getId()) {
      // Asignamos a lista un nuevo nodo de valor v y
      // cuyo siguiente elemento es la lista actual
      nuevo = new nodo(v, plista);
      if(!plista) plista = nuevo;
      else plista->anterior = nuevo;
   }
   else {
      // Buscar el nodo de valor menor a v
      // Avanzamos hasta el �ltimo elemento o hasta que el siguiente tenga
      // un valor mayor que v
      while(plista->siguiente && plista->siguiente->valor.getId() <= v.getId()) Siguiente();
      // Creamos un nuevo nodo despu�s del nodo actual
      nuevo = new nodo(v, plista->siguiente, plista);
      plista->siguiente = nuevo;
      if(nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
   }
}

void lista::Borrar(Paquete v)
{
   pnodo nodo;

   nodo = plista;
   while(nodo && nodo->valor.getId() < v.getId()) nodo = nodo->siguiente;
   while(nodo && nodo->valor.getId() > v.getId()) nodo = nodo->anterior;

   if(!nodo || nodo->valor.getId() != v.getId()) return;
   // Borrar el nodo

   if(nodo->anterior) // no es el primer elemento
      nodo->anterior->siguiente = nodo->siguiente;
   if(nodo->siguiente) // no el el �ltimo nodo
      nodo->siguiente->anterior = nodo->anterior;
   delete nodo;
}

void lista::Mostrar()
{
  
}

void lista::MostrarLIsta()
{
    pnodo nodo = plista;
    if (!ListaVacia()) {
        do {


            std::cout << nodo->siguiente->valor.toStringPaquete();
            std::cout << "---------------------------------\n";
            nodo = nodo->anterior;
        } while ((nodo != plista && nodo != nullptr));

        std::cout << std::endl;
    }
    else
    {
        std::cout << "****LISTA VACIA****" << std::endl;
    }
    
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
