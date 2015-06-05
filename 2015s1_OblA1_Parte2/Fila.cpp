#include "Fila.h"

#ifndef FILA_CPP
#define FILA_CPP

Fila::Fila(unsigned int nro) {
}

Fila::Fila(const Fila &f) {
}

Fila::~Fila() {
}

Fila &Fila::operator=(const Fila &f) {
	
}

unsigned int Fila::GetNumero() const {

	return this->nro;
}

void Fila::AsignarExpresion(const Expresion &exp, unsigned int col) {

}

void Fila::EliminarExpresion(unsigned int col) {
	

}

int Fila::EvaluarCelda(InterfazDelSistema *interfaz, unsigned int col, bool &error) {
	
}
 
bool Fila::operator==(const Fila &f) const {

}

bool Fila::operator!=(const Fila &f) const {
}

bool Fila::operator<(const Fila &f) const {
}

bool Fila::operator>(const Fila &f) const {
}

bool Fila::operator<=(const Fila &f) const {
}

bool Fila::operator>=(const Fila &f) const {
}

void Fila::ImprimirFormula(unsigned int columna) const {

		
}

void Fila::ImprimirCeldasEvaluadas(InterfazDelSistema *interfaz, unsigned int columnaDesde, unsigned int columnaHasta) const {


}


#endif