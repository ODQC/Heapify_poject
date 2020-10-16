/*#include "Heap.h"

void Heap::Heapify(lista*,int pos)
{
	lista *lis;
	int lar = pos;
	int izq = getIzq(pos);
	int der = getDer(pos);
	if (izq<size(lista) && lis->Anterior()>lis->ValorActual(lar)->getPriority()) {
		lar = izq;
	}
	if (izq<size(lista) && lis->ValorActual(der)->getPriority()>lis->ValorActual(lar)->getPriority()) {
		lar = der;
	}
	
}

void Heap::Swap()
{
	/*aux = a
	a=b*/
	/*b= aux
}

void Heap::HeapSort(lista)
{
}*/
