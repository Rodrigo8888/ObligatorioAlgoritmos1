#include "Celda.h"

#ifndef CELDA_CPP
#define CELDA_CPP

Celda::Celda(unsigned int nro) {
}

Celda::Celda(unsigned int nro, const Expresion &exp) {
}

Celda::Celda(const Celda &f) {
}

Celda::~Celda() {
}

Celda &Celda::operator=(const Celda &f) {
	if (this != &f) {
	}
	return *this;
}

unsigned int Celda::GetNumero() const {

}

void Celda::AsignarExpresion(const Expresion &exp) {

}

void Celda::EliminarExpresion() {
	
}

int Celda::EvaluarCelda(InterfazDelSistema *interfaz, bool &error) {
	
}

void Celda::imprimirFormula(){
}

void Celda::imprimirCeldaEvaluada(InterfazDelSistema *interfaz){

}

 
bool Celda::operator==(const Celda &f) const {

}

bool Celda::operator!=(const Celda &f) const {
}

bool Celda::operator<(const Celda &f) const {
}

bool Celda::operator>(const Celda &f) const {
}

bool Celda::operator<=(const Celda &f) const {
}

bool Celda::operator>=(const Celda &f) const {
}



#endif