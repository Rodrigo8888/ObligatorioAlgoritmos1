#include "ExpresionImp.h"
#include "ExpresionCte.h"
#include "ExpresionBin.h"
#include <assert.h>
#ifndef EXPRESIONBIN_CPP
#define EXPRESIONBIN_CPP

ExpresionBin::ExpresionBin()
{
	this->izq = new ExpresionImp();
	this->der = new ExpresionImp();
	this ->op = '+';
}

ExpresionBin::ExpresionBin(const Expresion &expIzq, char op, const Expresion &expDer)
{
	this->izq = expIzq.Clon();
	this->der = expDer.Clon();
	this->op = op;
}


ExpresionBin::~ExpresionBin()
{
	delete this->der;
	delete this->izq;
}
Expresion &ExpresionBin::operator=(const Expresion &exp)
{
	if(this != &exp) {
		
		//NO IMPLEMENTADO
	
	}
	return *this;
}

Expresion &ExpresionBin::operator=(const ExpresionBin &exp)
{
	if(this != &exp) {

		//NO IMPLEMENTADO

	}
	return *this;
}

bool ExpresionBin::operator==(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionBin::operator!=(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionBin::operator<(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionBin::operator<=(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionBin::operator>(const Expresion &exp) const {
	assert (false);
	return false;
}

bool ExpresionBin::operator>=(const Expresion &exp) const {
	assert (false);
	return false;
}

Expresion &ExpresionBin::operator+(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionBin();
}

Expresion &ExpresionBin::operator-(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionBin();
}

Expresion &ExpresionBin::operator*(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionBin();
}

Expresion &ExpresionBin::operator/(const Expresion &exp) const
{
	assert (false);
	return *new ExpresionBin();
}

int ExpresionBin::Evaluar(bool &error) const
{
	int ret =-1;
	if (this->op == '/' && this->der->Evaluar(error) == 0) error = true;
	int izq = this->izq->Evaluar(error);
	int der = this->der->Evaluar(error);
	if (!error){
		if (this->op == '+') ret = izq+der;
		if (this->op == '-') ret = izq-der;
		if (this->op == '*') ret = izq*der;
		if (this->op == '/') ret = izq/der;
	}
	return ret;
}

int ExpresionBin::Evaluar(InterfazDelSistema* interfaz, bool &error) const
{
	int ret =-1;
	if (this->op == '/' && this->der->Evaluar(error) == 0) error = true;
	int izq = this->izq->Evaluar(interfaz,error);
	int der = this->der->Evaluar(interfaz,error);
	if (!error){
		if (this->op == '+') ret = izq+der;
		if (this->op == '-') ret = izq-der;
		if (this->op == '*') ret = izq*der;
		if (this->op == '/') ret = izq/der;
	}
	return ret;
}

char *ExpresionBin::Formula() const
{
	int cantI = strnlen_s(this->izq->Formula(),100);
	int cantD = strnlen_s(this->der->Formula(),100);
	int largo = 6 + cantI+ cantD;
	char *ret =new char[largo];
	ret [0]= '\0';
	char operador [4];
	operador[0] = ')';
	operador[1] = this->op;
	operador[2] = '(';
	operador[3] = '\0';
	ret = strcat(ret,"(");
	ret = strcat(ret,this->izq->Formula());
	ret = strcat(ret,operador);
	ret = strcat(ret,this->der->Formula());
	ret = strcat(ret,")");
	ret [largo-1] = '\0';
	return ret;
}

Expresion *ExpresionBin::Clon() const
{
	return new ExpresionBin(*this->izq,this->op, *this->der);
}

#endif