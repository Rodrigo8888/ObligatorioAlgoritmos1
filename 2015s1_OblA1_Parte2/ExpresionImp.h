#ifndef EXPRESIONIMP_H
#define EXPRESIONIMP_H

#include "Expresion.h"
#include "Cadena.h"

class ExpresionImp : public Expresion
{
public:
	ExpresionImp();
	ExpresionImp(int valor);
	ExpresionImp(char *referencia);
	ExpresionImp(const Expresion &exp);
	ExpresionImp(const ExpresionImp &exp);

	Expresion &operator=(const Expresion &exp);
	Expresion &operator=(const ExpresionImp &exp);

	~ExpresionImp();

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

	// Atributos

};

#endif