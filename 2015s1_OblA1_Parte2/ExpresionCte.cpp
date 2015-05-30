#include "ExpresionImp.h"
#include "ExpresionCte.h"
#include <assert.h>

#ifndef EXPRESIONCTE_CPP
#define EXPRESIONCTE_CPP

ExpresionCte::ExpresionCte()
{
	this->valor = 0;
}

ExpresionCte::ExpresionCte(int valor)
{
	this->valor = valor;
}

ExpresionCte::~ExpresionCte()
{
	return;
}
ExpresionCte::ExpresionCte(char *referencia)
{
	//NO IMPLEMENTADO
}

//ExpresionCte::ExpresionCte(const Expresion &exp)
//{
//	//NO IMPLEMENTADO
//}

ExpresionCte::ExpresionCte(const ExpresionCte &exp)
{
	//NO IMPLEMENTADO
}

Expresion &ExpresionCte::operator=(const Expresion &exp)
{
	if(this != &exp) {
		
		
	
	}
	return *this;
}


bool ExpresionCte::operator==(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionCte::operator!=(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionCte::operator<(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionCte::operator<=(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionCte::operator>(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionCte::operator>=(const Expresion &exp) const {
	assert (false);
	return false;
}

Expresion &ExpresionCte::operator+(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionCte();
}

Expresion &ExpresionCte::operator-(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionCte();
}

Expresion &ExpresionCte::operator*(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionCte();
}

Expresion &ExpresionCte::operator/(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionCte();
}

int ExpresionCte::Evaluar(bool &error) const
{
	return this->valor;
}

int ExpresionCte::Evaluar(InterfazDelSistema* interfaz, bool &error) const
{
	return this->valor;
}

char *ExpresionCte::Formula() const
{
	char *ret = new char [10];
	itoa (this->valor,ret,10);
	return ret;
}

Expresion *ExpresionCte::Clon() const
{
	return new ExpresionImp(this->valor);
}

#endif