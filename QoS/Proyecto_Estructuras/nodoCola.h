#pragma once
#ifndef NODO_H
#define NODO_H
/*
* DASADO DEL REPOSITORIO DE GITHUB DE:
* Autor: William David Parras Mendez
* Dependencias: Ninguna
*/

/* Pantilla */
template <class T>
class Nodo
{
	/* Datos privados */
private:
	Nodo * nxt; /* Apuntador a otro nodo */
	T data; /* Dato que Almacena el nodo */
public:
	/* Prototipos */
	Nodo(); /* Constructora */
	~Nodo(); /* Destructora */
	void set_data(T); /* Inicializa dato del nodo */
	T get_data(void); /* Obtiene Dato almacenado en el nodo */
	Nodo * get_nxt(void); /* Enlaza el nodo */
	void set_nxt(Nodo *); /* Obtiene el enlace del nodo */
};

/* Inicializa componentes */
template <class T>
Nodo<T>::Nodo(){
	nxt = NULL;
	data = 0;
}

/* Definicion de la insercion del dato */
template <class T>
void Nodo<T>::set_data(T value){
	data = value;
}

/* Retorna el dato actual almacenado */
template <class T>
T Nodo<T>::get_data(){
	return data;
}

/* Enlaza a otro nodo */
template <class T>
void Nodo<T>::set_nxt(Nodo * item){
	nxt = item;
}

/* Obtiene el enlace del nodo */
template <class T>
Nodo<T>* Nodo<T>::get_nxt(){
	return nxt;
}
#endif

