#include "PruebaPlanilla.h"

PruebaPlanilla::PruebaPlanilla(ConductorPrueba* conductor)
:Prueba(conductor)
{
}

PruebaPlanilla::~PruebaPlanilla()
{
}

char* PruebaPlanilla::getNombre()const
{
	return "PruebaPlanilla";
}

void PruebaPlanilla::correrPruebaConcreta()
{

}