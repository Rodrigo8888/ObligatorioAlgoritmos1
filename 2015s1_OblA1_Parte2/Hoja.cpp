#include "Hoja.h"

#ifndef HOJA_CPP
#define HOJA_CPP

ostream &operator<<(ostream& out, const Hoja &h) {
	out << h.GetNombre();
	return out;
}

Hoja::Hoja(const Cadena &nombre, unsigned int maxColumnas, unsigned int maxFilas) {
	//NO IMPLEMENTADO	
}

Hoja::Hoja(const Hoja &h) {
	//NO IMPLEMENTADO	
}

Hoja::~Hoja() {
	//NO IMPLEMENTADO	
}

Hoja &Hoja::operator=(const Hoja &h) {
	if (this != &h) {
		
		//NO IMPLEMENTADO	
	
	}
	return *this;
}

const Cadena &Hoja::GetNombre() const {
	//NO IMPLEMENTADO	
	return *new Cadena();
}

void Hoja::SetNombre(const Cadena &nombre) {
	//NO IMPLEMENTADO	
}

void Hoja::AsignarExpresion(const Expresion &exp, unsigned int col, unsigned int fil) {
	//NO IMPLEMENTADO	
}

void Hoja::EliminarExpresion(unsigned int col, unsigned int fil) {
	//NO IMPLEMENTADO	
}

int Hoja::EvaluarCelda(InterfazDelSistema *interfaz, unsigned int col, unsigned int fil, bool &error) {
	//NO IMPLEMENTADO	
	return 0;
}
 
bool Hoja::operator==(const Hoja &h) const {
	//NO IMPLEMENTADO	
	return false;
}

bool Hoja::operator!=(const Hoja &h) const {
	//NO IMPLEMENTADO	
	return false;
}

bool Hoja::operator<(const Hoja &h) const {
	//NO IMPLEMENTADO	
	return false;
}

bool Hoja::operator>(const Hoja &h) const {
	//NO IMPLEMENTADO	
	return false;
}

bool Hoja::operator<=(const Hoja &h) const {
	//NO IMPLEMENTADO	
	return false;
}

bool Hoja::operator>=(const Hoja &h) const {
	//NO IMPLEMENTADO	
	return false;
}

void Hoja::ImprimirFormula(unsigned int columna, unsigned int fila) const {
	//NO IMPLEMENTADO	
}

void Hoja::ImprimirCeldasEvaluadas(InterfazDelSistema *interfaz, unsigned int columnaDesde, unsigned int filaDesde, unsigned int columnaHasta, unsigned int filaHasta) const {
	//NO IMPLEMENTADO	
}

#endif