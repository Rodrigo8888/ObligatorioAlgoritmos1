#ifndef CELDA_H
#define CELDA_H

class InterfazDelSistema;

#include <iostream>
using namespace std;
#include <assert.h>
#include "ExpresionImp.h"



class Celda {
public:
	// Constructor. Recibe el numero de Celda
	Celda(unsigned int nro);

	// Constructor. Recibe el numero de Celda y una expresion
	Celda(unsigned int nro, const Expresion &exp);

	// Constructor copia
	Celda(const Celda &h);

	// Destructor
	~Celda();

	// Operador de asignacion
	Celda &operator=(const Celda &f);

	// Retorna el numero de Celda
	unsigned int GetNumero() const;

	// Asigna una expresion a la Celda
	void AsignarExpresion(const Expresion &exp);

	//Evalua la expresion de la Celda
	int EvaluarCelda(InterfazDelSistema *interfaz, bool &error);

	//Imprime la formula de la expresion
	void imprimirFormula();

	//Imprime la celda evaluada
	void Celda::imprimirCeldaEvaluada(InterfazDelSistema *interfaz);

	// Elimina la expresion
	void EliminarExpresion();

	// Operadores de comparacion. Comparan el numero de fila
	bool operator==(const Celda &f) const;
	bool operator!=(const Celda &f) const;
	bool operator<(const Celda &f) const;
	bool operator>(const Celda &f) const;
	bool operator<=(const Celda &f) const;
	bool operator>=(const Celda &f) const;


protected:
	// Constructor por defecto (no se usa)
	Celda() { assert(false); };

private:

	// Atributos
	unsigned int nroc;
	Expresion* dato;

};



#endif