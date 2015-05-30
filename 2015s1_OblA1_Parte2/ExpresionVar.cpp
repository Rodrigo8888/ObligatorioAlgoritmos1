#include "ExpresionImp.h"
#include "ExpresionCte.h"
#include "ExpresionVar.h"
#include <assert.h>

#ifndef EXPRESIONVAR_CPP
#define EXPRESIONVAR_CPP



ExpresionVar::ExpresionVar()
{
	//NO IMPLEMENTADO
}

//ExpresionVar::ExpresionVar(int valor)
//{
//	//NO IMPLEMENTADO
//}

ExpresionVar::ExpresionVar(char *referencia)
{
	this->ref = setRef(referencia);

	//this->ref = new Cadena(referencia);
}

//ExpresionCte::ExpresionCte(const Expresion &exp)
//{
//	//NO IMPLEMENTADO
//}

ExpresionVar::ExpresionVar(const ExpresionVar &exp)
{
	this->ref = setRef(exp.ref);
	
}

Expresion &ExpresionVar::operator=(const Expresion &exp)
{
	if(this != &exp) {
	//	this->ref = exp			
	}
	return *this;
}

Expresion &ExpresionVar::operator=(const ExpresionVar &exp)
{
	if(this != &exp) {

		delete this->ref;
		this->ref = exp.ref;

	}
	return *this;
}

char* setRef(char* referencia){

	int largo = strlen(referencia);

	char* ret = new char[largo + 1];

	int pos = 0;
	while(pos < largo){
		ret[pos] = referencia[pos];
		pos++;
	}
	ret[pos] = '\0';

	return ret;
}

ExpresionVar::~ExpresionVar()
{
	delete this->ref;
}

bool ExpresionVar::operator==(const Expresion &exp) const {

	assert(false);
	return false;
}

bool ExpresionVar::operator!=(const Expresion &exp) const {

	assert(false);
	return false;
}

bool ExpresionVar::operator<(const Expresion &exp) const {

	assert(false);
	return false;
}

bool ExpresionVar::operator<=(const Expresion &exp) const {

	assert(false);
	return false;
}

bool ExpresionVar::operator>(const Expresion &exp) const {

	assert(false);
	return false;
}

bool ExpresionVar::operator>=(const Expresion &exp) const {

	assert(false);
	return false;
}

Expresion &ExpresionVar::operator+(const Expresion &exp) const
{
	assert(false);
	return *new ExpresionVar();
}

Expresion &ExpresionVar::operator-(const Expresion &exp) const
{
	assert(false);
	return *new ExpresionVar();
}

Expresion &ExpresionVar::operator*(const Expresion &exp) const
{
	assert(false);
	return *new ExpresionVar();
}

Expresion &ExpresionVar::operator/(const Expresion &exp) const
{
	assert(false);
	return *new ExpresionVar();
}

int ExpresionVar::Evaluar(bool &error) const
{

	assert(false);
	return 0;
}

int ExpresionVar::Evaluar(InterfazDelSistema* interfaz, bool &error) const
{
	return interfaz->EvaluarReferencia(this->ref, error);
}

char *ExpresionVar::Formula() const
{
	return this->ref;
}

Expresion *ExpresionVar::Clon() const
{
	return new ExpresionVar(this->ref);
}

#endif