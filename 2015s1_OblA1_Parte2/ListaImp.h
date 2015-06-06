#ifndef LISTAIMP_H
#define LISTAIMP_H

#include <assert.h>
#include "Lista.h"
#include "IteradorListaImp.h"

template <class T>
class IteradorListaImp;

template <class U>
class NodoLista {
	public:
		U dato;
		NodoLista<U> *ant;
		NodoLista<U> *sig;

		NodoLista(const U &e, NodoLista<U> *a, NodoLista<U> *s) : dato(e), ant(a), sig(s) {}
		NodoLista(const NodoLista<U> &n) : dato(n.dato), ant(n.ant), sig(n.sig)  {}

		NodoLista<U> &operator=(const NodoLista<U> &n) { dato = n.dato; ant = n.ant; sig = n.sig; }

		virtual ~NodoLista() {}
};

template <class T>
class ListaImp: public Lista<T> {
	friend class IteradorListaImp<T>; 
	friend ostream &operator<< <>(ostream& o, const ListaImp<T> & l);
public:

	// Constructor por defecto
	ListaImp();

	// Constructor copia
	ListaImp(const Lista<T> &l);
	ListaImp(const ListaImp<T> &l);

	// Operador de asignacion
	Lista<T> &operator=(const Lista<T> &l);
	Lista<T> &operator=(const ListaImp<T> &l);


	// Para ver la documentacion del resto de las funciones ver la especificacion
	virtual ~ListaImp();

	void AgregarPpio(const T &e);
	void AgregarFin(const T &e);
	void AgregarOrd(const T &e);	
	void BorrarPpio();	
	void BorrarFin();	
	void Borrar(const T &e);	
	T& RecuperarInseguro(const T&);
	const T& Recuperar(const T&) const; 

	bool Existe(const T &e) const;	

	void Vaciar();

	unsigned int Largo() const;

	bool EsVacia() const;
	bool EsLlena() const;

	Iterador<T> GetIterador() const;

protected:

	// Atributos

	NodoLista<T> *ppio; //Puntero al ppio de la lista
	NodoLista<T> *fin; //Puntero al fin de la lista

	unsigned int largo; //Lleva la cuenta de la cantidad de elementos de la lista
};

#include "ListaImp.cpp"

#endif