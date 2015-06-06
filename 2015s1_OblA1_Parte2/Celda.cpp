#include "Celda.h"

#ifndef CELDA_CPP
#define CELDA_CPP

Celda::Celda(unsigned int nro) {
	this->nroc = nro;
	this->dato = new ExpresionImp();
}

Celda::Celda(unsigned int nro, const Expresion &exp) {
	this->nroc = nro;
	this->dato = new ExpresionImp(exp);
}

Celda::Celda(const Celda &f) {
	this->nroc = f.GetNumero();
	this->dato = new ExpresionImp (*f.dato);
}

Celda::~Celda() {
	delete this->dato;
}

Celda &Celda::operator=(const Celda &f) {
	if (this != &f) {
		delete this->dato;
		this->dato = new ExpresionImp (*f.dato);
		this->nroc = f.GetNumero();
	}
	return *this;
}

unsigned int Celda::GetNumero() const {
	return this->nroc;
}

void Celda::AsignarExpresion(const Expresion &exp) {
	delete this->dato;
	this->dato = new ExpresionImp (exp);

}

void Celda::EliminarExpresion() {
	delete this->dato;
	this->dato = new ExpresionImp ();
	
}

int Celda::EvaluarCelda(InterfazDelSistema *interfaz, bool &error) {
	int ret = this->dato->Evaluar(interfaz,error);
	if (error) error = true;
	return ret;
}

void Celda::imprimirFormula(){
	char * ret = this->dato->Formula();
	cout << ret;
}

void Celda::imprimirCeldaEvaluada(InterfazDelSistema *interfaz){
	bool error = false;
	int ret = this->dato->Evaluar(interfaz, error);
	if (error) cout <<  '\t' << '#REF';
	else cout <<  '\t' << ret;
}

 
bool Celda::operator==(const Celda &f) const {
	return this->nroc == f.GetNumero();
}

bool Celda::operator!=(const Celda &f) const {
	return this->nroc != f.GetNumero();
}

bool Celda::operator<(const Celda &f) const {
	return this->nroc < f.GetNumero();
}

bool Celda::operator>(const Celda &f) const {
	return this->nroc > f.GetNumero();
}

bool Celda::operator<=(const Celda &f) const {
	return this->nroc <=  f.GetNumero();
}

bool Celda::operator>=(const Celda &f) const {
	return this->nroc >= f.GetNumero();
}



#endif