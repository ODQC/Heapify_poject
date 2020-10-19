#include "lista.h"

lista::lista(): plista(NULL)
{
    //ctor
}

bool lista::Actual() { return plista != NULL; }

void lista::heapify_down(pnodo actual)
{
   
   /* if (actual->anterior->valor->getPriority() < size() && A[Izquierda] > A[i]) {
        Mayor = Izquierda;
    }
    if (Derecha < size() && A[Derecha] > A[Mayor]) {
        Mayor = Derecha;
    }
    if (Mayor != i) {
        swap(A[i], A[Mayor]);
        heapify_down(Mayor);
    }
   */
}

void lista::heapify_up(pnodo actual)
{
   
    if (actual->anterior->valor->getPriority() < actual->valor->getPriority())
    {
        swap(actual, actual->anterior);
        heapify_up(actual->anterior);
    }

}

Paquete* lista::top()
{
    return 0;
}

void lista::pop()
{
  /*  try {
        if (size() == 0)
            throw out_of_range("Vector<X>::at() : "
                "index fuera de rango(Heap underflow)");
        A[0] = A.back();
        A.pop_back();
        heapify_down(0);
    }
    catch (const out_of_range& oor) {
        cout << "\n" << oor.what();
    }*/
}


int lista::getSize()
{
    int i=0;
    try {
        if (ListaVacia()) {
            return 0;
        }
        else {
                pnodo nodo;
                Primero();
                nodo = plista;
                while (nodo) {
                    i++;
                }
                return i;
        }
    }
    catch (const std::exception e)
    {
        std::cout << e.what();
    }
}

int lista::getIndex(pnodo index)
{
    bool encontrado;
    encontrado = false;
    int i;
    try {
        if (ListaVacia()) {
            return NULL;
        }
        else {
            pnodo nodo;
            Primero();
            nodo = plista;
            while (nodo) {
                if (nodo->valor==index->valor)
                {
                    return i;
                    encontrado = true;
                    break;
                }
                i++;
            }
             if (true){
                 return NULL;
             }
        }
    }
    catch (const std::exception e)
    {
        std::cout << e.what();
    }
}

void lista::swap(pnodo a, pnodo b)
{
    Paquete* aux  ;
    aux = b->valor;
    b->valor = a->valor;
    a->valor = aux;
}

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
      heapify_up(nuevo);
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
    try {
        if (ListaVacia()) {
            std::cout << "Lista vacia\n";
            std::system("pause");
        }
        else {
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
            std::cout << "--------------------------------" << std::endl;
        }
    }
    catch (const std::out_of_range& e)
    {
        std::cout << e.what();
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
void heapify_down()
{
   
   
}