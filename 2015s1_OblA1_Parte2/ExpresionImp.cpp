#include "ExpresionImp.h"

#ifndef EXPRESIONIMP_CPP
#define EXPRESIONIMP_CPP

ostream &operator<<(ostream &out, const Expresion &exp)
{	
	out << exp.Formula();
	return out;
}

ExpresionImp::ExpresionImp()
{
	//NO IMPLEMENTADO
}

ExpresionImp::ExpresionImp(int valor)
{
	//NO IMPLEMENTADO
}

ExpresionImp::ExpresionImp(char *referencia)
{
	//NO IMPLEMENTADO
}

ExpresionImp::ExpresionImp(const Expresion &exp)
{
	//NO IMPLEMENTADO
}

ExpresionImp::ExpresionImp(const ExpresionImp &exp)
{
	//NO IMPLEMENTADO
}

Expresion &ExpresionImp::operator=(const Expresion &exp)
{
	if(this != &exp) {
		
		//NO IMPLEMENTADO
	
	}
	return *this;
}

Expresion &ExpresionImp::operator=(const ExpresionImp &exp)
{
	if(this != &exp) {

		//NO IMPLEMENTADO

	}
	return *this;
}

ExpresionImp::~ExpresionImp()
{
	//NO IMPLEMENTADO
}

bool ExpresionImp::operator==(const Expresion &exp) const {

	//NO IMPLEMENTADO
	return false;
}

bool ExpresionImp::operator!=(const Expresion &exp) const {

	//NO IMPLEMENTADO
	return false;
}

bool ExpresionImp::operator<(const Expresion &exp) const {

	//NO IMPLEMENTADO
	return false;
}

bool ExpresionImp::operator<=(const Expresion &exp) const {

	//NO IMPLEMENTADO
	return false;
}

bool ExpresionImp::operator>(const Expresion &exp) const {

	//NO IMPLEMENTADO
	return false;
}

bool ExpresionImp::operator>=(const Expresion &exp) const {

	//NO IMPLEMENTADO
	return false;
}

Expresion &ExpresionImp::operator+(const Expresion &exp) const
{
	//NO IMPLEMENTADO
	return *new ExpresionImp();
}

Expresion &ExpresionImp::operator-(const Expresion &exp) const
{
	//NO IMPLEMENTADO
	return *new ExpresionImp();
}

Expresion &ExpresionImp::operator*(const Expresion &exp) const
{
	//NO IMPLEMENTADO
	return *new ExpresionImp();
}

Expresion &ExpresionImp::operator/(const Expresion &exp) const
{
	//NO IMPLEMENTADO
	return *new ExpresionImp();
}

int ExpresionImp::Evaluar(bool &error) const
{

	//NO IMPLEMENTADO
	return 0;
}

int ExpresionImp::Evaluar(InterfazDelSistema* interfaz, bool &error) const
{

	//NO IMPLEMENTADO
	return 0;
}

char *ExpresionImp::Formula() const
{

	//NO IMPLEMENTADO
	char *ret = new char[1];
	ret[0] = '\0';
	return ret;
}

Expresion *ExpresionImp::Clon() const
{

	//NO IMPLEMENTADO
	return new ExpresionImp();
}

#endif