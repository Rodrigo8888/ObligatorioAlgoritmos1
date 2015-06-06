#include "Fila.h"

#ifndef FILA_CPP
#define FILA_CPP

Fila::Fila(unsigned int nro) {
	this->nrof = nro;
	this ->celdas = new ListaImp<Celda>();
}

Fila::Fila(const Fila &f) {
	this->nrof = f.GetNumero();
	this ->celdas = new ListaImp<Celda>(*f.celdas);
}

Fila::~Fila() {
	delete this->celdas;
}

Fila &Fila::operator=(const Fila &f) {
	if (this != &f) {
		delete this->celdas;
		this->celdas = new ListaImp<Celda>(*f.celdas);
		this->nrof = f.GetNumero();
	}
	return *this;
}

unsigned int Fila::GetNumero() const {
	return this->nrof;
}

void Fila::AsignarExpresion(const Expresion &exp, unsigned int col) {
	if (!this->celdas->Existe(col)){
		Celda *cel = new Celda(col);
		cel->AsignarExpresion (exp);
		this ->celdas->AgregarOrd(*cel);
	}
	else{
		Celda *c (&this->celdas->RecuperarInseguro(col));
		c->AsignarExpresion(exp);
	}
}

void Fila::EliminarExpresion(unsigned int col) {
	if (!this->celdas->Existe(col)){
		Celda *cel = new Celda(col);
		this ->celdas->AgregarOrd(*cel);
	}
	else{
		Celda *c (&this->celdas->RecuperarInseguro(col));
		c->AsignarExpresion(ExpresionImp());
	}
}

int Fila::EvaluarCelda(InterfazDelSistema *interfaz, unsigned int col, bool &error) {
	if (!this->celdas->Existe(col)){
		Celda *cel = new Celda(col);
		cel->AsignarExpresion (ExpresionImp());
		this ->celdas->AgregarOrd(*cel);
		return cel->EvaluarCelda(interfaz,error);
	}
	else{
		Celda *c (&this->celdas->RecuperarInseguro(col));
		return c->EvaluarCelda(interfaz,error);
	}
}
 
bool Fila::operator==(const Fila &f) const {
	return this->nrof == f.GetNumero();
}

bool Fila::operator!=(const Fila &f) const {
	return this->nrof != f.GetNumero();
}

bool Fila::operator<(const Fila &f) const {
	return this->nrof < f.GetNumero();
}

bool Fila::operator>(const Fila &f) const {
	return this->nrof > f.GetNumero();
}

bool Fila::operator<=(const Fila &f) const {
	return this->nrof <= f.GetNumero();
}

bool Fila::operator>=(const Fila &f) const {
	return this->nrof >= f.GetNumero();
}

void Fila::ImprimirFormula(unsigned int columna) const {
	if (!this->celdas->Existe(columna)){
		Celda *cel = new Celda(columna);
		cel->AsignarExpresion (ExpresionImp());
		this ->celdas->AgregarOrd(*cel);
		cel->imprimirFormula();
	}
	else{
		Celda *c (&this->celdas->RecuperarInseguro(columna));
		c->imprimirFormula();
	}
		
}

void Fila::ImprimirCeldasEvaluadas(InterfazDelSistema *interfaz, unsigned int columnaDesde, unsigned int columnaHasta) const {

	for (int i= columnaDesde; i<= columnaHasta; i++){
		if (!this->celdas->Existe(i)){
			Celda *cel = new Celda(i);
			cel->AsignarExpresion (ExpresionImp());
			this ->celdas->AgregarOrd(*cel);
			cel->imprimirCeldaEvaluada(interfaz);
		}
		else{
			Celda *c (&this->celdas->RecuperarInseguro(i));
			c->imprimirCeldaEvaluada(interfaz);
		}
	}
}


#endif