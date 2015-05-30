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
	this->e = new ExpresionImp(0);
}

ExpresionImp::ExpresionImp(int valor)
{
	this->e = ExpresionCte(valor);
}

ExpresionImp::ExpresionImp(char *referencia)
{
	this->e = ExpresionRef (referencia);
}

ExpresionImp::ExpresionImp(const Expresion &exp)
{
	this->e = exp.Clon();
}

ExpresionImp::ExpresionImp(const ExpresionImp &exp)
{
	this->e = exp.Clon();
}

Expresion &ExpresionImp::operator=(const Expresion &exp)
{
	if(this != &exp) {
		delete e;
		this ->e = exp.Clon();	
	}
	return *this;
}

Expresion &ExpresionImp::operator=(const ExpresionImp &exp)
{
	if(this != &exp) {
		delete e;
		this ->e = exp.Clon();	
	}
	return *this;
}

ExpresionImp::~ExpresionImp()
{
	delete this->e;
}

bool ExpresionImp::operator==(const Expresion &exp) const {
	bool e1,e2;
	int resp1 = this->Evaluar(e1);
	int resp2 = exp.Evaluar(e2);
	if (e1&&e2) return true;
	if (e1!= e2) return false;
	return resp1==resp2;
}

bool ExpresionImp::operator!=(const Expresion &exp) const {
	bool e1,e2;
	int resp1 = this->Evaluar(e1);
	int resp2 = exp.Evaluar(e2);
	if (e1&&e2) return true;
	if (e1!= e2) return false;
	return resp1!=resp2;
}

bool ExpresionImp::operator<(const Expresion &exp) const {
	bool e1,e2;
	int resp1 = this->Evaluar(e1);
	int resp2 = exp.Evaluar(e2);
	if (e1&&e2) return false;
	if (e1|| e2) return false;
	return resp1<resp2;
}

bool ExpresionImp::operator<=(const Expresion &exp) const {
	bool e1,e2;
	int resp1 = this->Evaluar(e1);
	int resp2 = exp.Evaluar(e2);
	if (e1&&e2) return true;
	if (e1!= e2) return false;
	return resp1<=resp2;
}

bool ExpresionImp::operator>(const Expresion &exp) const {
	bool e1,e2;
	int resp1 = this->Evaluar(e1);
	int resp2 = exp.Evaluar(e2);
	if (e1&&e2) return false;
	if (e1!= e2) return false;
	return resp1>resp2;
	return false;
}

bool ExpresionImp::operator>=(const Expresion &exp) const {
	bool e1,e2;
	int resp1 = this->Evaluar(e1);
	int resp2 = exp.Evaluar(e2);
	if (e1&&e2) return true;
	if (e1!= e2) return false;
	return resp1>=resp2;
}

Expresion &ExpresionImp::operator+(const Expresion &exp) const
{
	return *new ExpresionImp(ExpresionBin(this->e,'+',exp));
}

Expresion &ExpresionImp::operator-(const Expresion &exp) const
{
	return *new ExpresionImp(ExpresionBin(this->e,'-',exp));
}

Expresion &ExpresionImp::operator*(const Expresion &exp) const
{
	return *new ExpresionImp(ExpresionBin(this->e,'*',exp));
}

Expresion &ExpresionImp::operator/(const Expresion &exp) const
{
	return *new ExpresionImp(ExpresionBin(this->e,'/',exp));
}

int ExpresionImp::Evaluar(bool &error) const
{
	return this->e->Evaluar(error);
}

int ExpresionImp::Evaluar(InterfazDelSistema* interfaz, bool &error) const
{
	return this->e->Evaluar(interfaz,error);
}

char *ExpresionImp::Formula() const
{
	return this->e->Formula();
}

Expresion *ExpresionImp::Clon() const
{
	ExpresionImp *nuevo = new ExpresionImp();
	delete nuevo->e;
	nuevo->e = this->e->Clon();
	return nuevo;
}

#endif