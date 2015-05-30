#ifndef HOJA_H
#define HOJA_H

class InterfazDelSistema;

#include <iostream>
using namespace std;
#include <assert.h>
#include "Cadena.h"
#include "ExpresionImp.h"


class Hoja;
ostream &operator<<(ostream& out, const Hoja &h);

class Hoja {
public:
	// Constructor con nombre
	Hoja(const Cadena &nombre, unsigned int maxColumnas, unsigned int maxFilas);
	
	// Constructor copia
	Hoja(const Hoja &h);

	// Destructor
	~Hoja();

	// Operador de asignacion
	Hoja &operator=(const Hoja &h);

	// Retorna el nombre de la hoja
	const Cadena &GetNombre() const;

	// Modifica el nombre de la hoja
	void SetNombre(const Cadena &nombre);

	// Asigna una expresion a una columna y fila determinada
	void AsignarExpresion(const Expresion &exp, unsigned int col, unsigned int fil);

	// Elimina la expresion de un columna y fila determinada
	void EliminarExpresion(unsigned int col, unsigned int fil);

	// Retorna el resultado de evaluar una celda en una columna y fila determinada
	// El parametro error devuelve si ocurrio un error o no 
	int EvaluarCelda(InterfazDelSistema *interfaz, unsigned int col, unsigned int fil, bool &error);

	// Operadores de comparacion. Comparan el nombre de la hoja
	bool operator==(const Hoja &h) const;
	bool operator!=(const Hoja &h) const;
	bool operator<(const Hoja &h) const;
	bool operator>(const Hoja &h) const;
	bool operator<=(const Hoja &h) const;
	bool operator>=(const Hoja &h) const;

	// Imprime la formula en la columna y fila determinada (segun formato en letra del obligatorio)
	void ImprimirFormula(unsigned int columna, unsigned int fila) const;

	// Imprime las celdas evaluadas en el rango especificado (segun formato en letra del obligatorio)
	void ImprimirCeldasEvaluadas(InterfazDelSistema *interfaz, unsigned int columnaDesde, unsigned int filaDesde, unsigned int columnaHasta, unsigned int filaHasta) const;

protected:
	// Constructor por defecto (no se usa)
	Hoja() { assert(false); }

private:

	// Atributos

};



#endif