#include "PruebacorreccionExpresiones.h"

PruebaCorreccionExpresiones::PruebaCorreccionExpresiones(ConductorPrueba* conductor)
:Prueba(conductor)
{
}

PruebaCorreccionExpresiones::~PruebaCorreccionExpresiones()
{
}

void PruebaCorreccionExpresiones::correrPruebaConcreta()
{

}

char* PruebaCorreccionExpresiones::getNombre()const
{
	return "PruebaCorreccionExpresiones";
}

