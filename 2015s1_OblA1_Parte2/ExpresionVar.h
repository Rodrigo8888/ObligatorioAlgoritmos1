#ifndef EXPRESIONVAR_H
#define EXPRESIONVAR_H

#include "Expresion.h"
#include "Cadena.h"


class ExpresionVar : public Expresion
{
public:
	ExpresionVar();
	//ExpresionVar(int valor);
	ExpresionVar(char *referencia);
	//ExpresionCte(const Expresion &exp);
	ExpresionVar(const ExpresionVar &exp);

	Expresion &operator=(const Expresion &exp);
	Expresion &operator=(const ExpresionVar &exp);

	~ExpresionVar();

	bool operator==(const Expresion &exp) const;
	bool operator!=(const Expresion &exp) const;
	bool operator<(const Expresion &exp) const;
	bool operator<=(const Expresion &exp) const;
	bool operator>(const Expresion &exp) const;
	bool operator>=(const Expresion &exp) const;
	
	Expresion &operator+(const Expresion &exp) const;
	Expresion &operator-(const Expresion &exp) const;
	Expresion &operator*(const Expresion &exp) const;
	Expresion &operator/(const Expresion &exp) const;

	int Evaluar(bool &error) const;
	int Evaluar(InterfazDelSistema* interfaz, bool &error) const;
	
	char *Formula() const;
	Expresion *Clon() const;

private:
	char* ref;
	//Cadena* ref;
	// Atributos

};

char* setRef(char* referencia);

#endif