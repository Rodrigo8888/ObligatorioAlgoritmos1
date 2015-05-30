
#ifndef EXPRESIONBIN_H
#define EXPRESIONBIN_H

#include "Expresion.h"
#include "Cadena.h"

class ExpresionBin : public Expresion
{
public:
	ExpresionBin();
	//ExpresionCte(const Expresion &exp);
	ExpresionBin(const ExpresionBin &exp);
	// lo agregue yo
	ExpresionBin(const Expresion &expIzq, char op, const Expresion &expDer);

	Expresion &operator=(const Expresion &exp);
	Expresion &operator=(const ExpresionBin &exp);

	~ExpresionBin();

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

	char op;
	Expresion* izq;
	Expresion* der;

	// Atributos

};

#endif