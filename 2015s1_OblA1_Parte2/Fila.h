#ifndef FILA_H
#define FILA_H

class InterfazDelSistema;

#include <iostream>
using namespace std;
#include <assert.h>
#include "ExpresionImp.h"
#include "ListaImp.h"
#include "Celda.h"


class Fila {
public:
	// Constructor. Recibe el numero de fila
	Fila(unsigned int nro);

	// Constructor copia
	Fila(const Fila &h);

	// Destructor
	~Fila();

	// Operador de asignacion
	Fila &operator=(const Fila &f);

	// Retorna el numero de fila
	unsigned int GetNumero() const;

	// Asigna una expresion a una columna determinada
	void AsignarExpresion(const Expresion &exp, unsigned int col);

	// Elimina la expresion de un columna determinada
	void EliminarExpresion(unsigned int col);

	// Retorna el resultado de evaluar una celda en una columna determinada
	// El parametro error devuelve si ocurrio un error o no 
	int EvaluarCelda(InterfazDelSistema *interfaz, unsigned int col, bool &error);

	// Operadores de comparacion. Comparan el numero de fila
	bool operator==(const Fila &f) const;
	bool operator!=(const Fila &f) const;
	bool operator<(const Fila &f) const;
	bool operator>(const Fila &f) const;
	bool operator<=(const Fila &f) const;
	bool operator>=(const Fila &f) const;

	// Imprime la formula en la columna determinada
	void ImprimirFormula(unsigned int columna) const;

	// Imprime las celdas evaluadas en el rango especificado
	void ImprimirCeldasEvaluadas(InterfazDelSistema *interfaz, unsigned int columnaDesde, unsigned int columnaHasta) const;



protected:
	// Constructor por defecto (no se usa)
	Fila() { assert(false); };



private:
	// Atributos
	unsigned int nrof;
	Lista<Celda>* celdas;
};



#endif