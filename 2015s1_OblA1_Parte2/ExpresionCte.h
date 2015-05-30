#ifndef EXPRESIONCTE_H
#define EXPRESIONCTE_H

#include "Expresion.h"
#include "Cadena.h"

class ExpresionCte : public Expresion
{
public:
	ExpresionCte();
	ExpresionCte(int valor);	
	ExpresionCte(char *referencia);
	ExpresionCte(const ExpresionCte &exp);

	Expresion &operator=(const Expresion &exp);
	Expresion &operator=(const ExpresionCte &exp);

	~ExpresionCte();

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
	int valor;

};

#endif
