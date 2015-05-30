#include "ListaImp.h"

#ifndef LISTAIMP_CPP
#define LISTAIMP_CPP

template <class T>
ostream &operator<< <>(ostream& out, const ListaImp<T> &l) {
	for (Iterador<T> &i = l.GetIterador(); !i.EsFin();) {
		out << i++ << " ";
	}
	return out;
}

template <class T>
ListaImp<T>::ListaImp(){
	this->ppio = this ->fin = NULL;
	this->largo =0;
}

template <class T>
ListaImp<T>::ListaImp(const Lista<T> &l) {
	largo=0;
	*this=l;
}

template <class T>
ListaImp<T>::ListaImp(const ListaImp<T> &l) {
	largo=0;
	*this=l;
}

template <class T>
Lista<T> &ListaImp<T>::operator=(const Lista<T> &l) { 
		virtual Lista<T> &operator=(const Lista<T> &l) {
		if (this != &l) {
			this->Vaciar();

			for (Iterador<T> &i = l.GetIterador(); !i.EsFin();) {
				AgregarFin(i++);
			}
		}
		return *this;
	}
}

template <class T>
Lista<T> &ListaImp<T>::operator=(const ListaImp<T> &l) { 
		virtual Lista<T> &operator=(const Lista<T> &l) {
		if (this != &l) {
			this->Vaciar();

			for (Iterador<T> &i = l.GetIterador(); !i.EsFin();) {
				AgregarFin(i++);
			}
		}
		return *this;
	}
}

template <class T>
ListaImp<T>::~ListaImp(){
	this->Vaciar();
}

template <class T>
void ListaImp<T>::AgregarPpio(const T &e){
	NodoLista<T> *nuevo = new NodoLista<T> (e,NULL,this->ppio);
	if (this->EsVacia()) this->ppio = this->fin = nuevo;
	else{
		this->ppio->ant = nuevo;
		this->ppio = nuevo;
	}
	this->largo ++;
}

template <class T>
void ListaImp<T>::AgregarFin(const T &e){
	NodoLista<T> *nuevo = new NodoLista<T>(e,this->fin, NULL);
	if (this->EsVacia()) this->ppio = this->fin = nuevo;
	else{
		this->fin->sig = nuevo;
		this->fin = nuevo;
	}
	this->largo ++;
}

template <class T>
void ListaImp<T>::AgregarOrd(const T &e){
	if (!this->EsVacia()){
		if (e<= this->ppio->dato) this->AgregarPpio(e);
		else if (e>= this->fin->dato) this->AgregarFin(e);
		else{
			NodoLista<T> *aux = this->ppio;
			while (aux->dato <e){
				aux = aux->sig;
			}
			NodoLista<T> *nuevo = new NodoLista <T> (e, aux->ant, aux);
			aux->ant->sig = nuevo;
			aux->ant = nuevo;
			this->largo ++;
		}		
	}
	else this->AgregarPpio();
}

template <class T>
void ListaImp<T>::BorrarPpio(){
	if(!this->EsVacia()){
		NodoLista<T>* aux = this->ppio;
		this->ppio = this->ppio->sig;
		delete(aux);
		if(this->largo==1) this->ppio = this->fin = NULL;
		else this->ppio->ant = NULL;
		this->largo--;
	}
}

template <class T>
void ListaImp<T>::BorrarFin(){
	if(!this->EsVacia){
		NodoLista<T>* aux = this->fin;
		this->fin = this->fin->ant;
		delete(aux);
		if(this->largo==1) this->ppio=this->fin=NULL;
		else this->fin->sig = NULL;
		largo--;

	}
}

template <class T>
void ListaImp<T>::Borrar(const T &e){
	if (this->ppio->dato == e) this->BorrarPpio();
	else if (this->fin->dato == e) this->BorrarFin();
	else{
		NodoLista<T> *aux = this->ppio->sig;
		while (aux){
			if (aux->dato == e){
				aux->ant->sig = aux->sig;
				aux->sig->ant = aux->ant;
				delete aux;
				this->largo--;
			}
			aux = aux->sig;
		}
	}
}

template <class T>
const T& ListaImp<T>::Recuperar(const T &e) const {
	NodoLista <T> *aux= this->ppio;
	bool ok = false;
	while (aux&& !ok){
		if (aux->dato == e) ok = true;
		else aux = aux->sig;
	}
	return aux->dato;
}

template <class T>
bool ListaImp<T>::Existe(const T &e) const {
	NodoLista <T> *aux= this->ppio;
	bool ok = false;
	while (aux&& !ok){
		if (aux->dato == e) ok = true;
		else aux = aux->sig;
	}
	return ok;
}

template <class T>
void ListaImp<T>::Vaciar(){
	while (!this->EsVacia()){
		this->BorrarFin();
	}
}

template <class T>
unsigned int ListaImp<T>::Largo()const { 
	return this->largo; 
}

template <class T>
bool ListaImp<T>::EsVacia()const { 	
	return this->largo==0; 
}

template <class T>
bool ListaImp<T>::EsLlena()const { 
	return false; 
}

template <class T>
Iterador<T> ListaImp<T>::GetIterador() const {
	return IteradorListaImp<T>(*this);
}

#endif