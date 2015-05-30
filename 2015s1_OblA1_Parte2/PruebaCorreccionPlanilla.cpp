#include "PruebaCorreccionPlanilla.h"

PruebaCorreccionPlanilla::PruebaCorreccionPlanilla(ConductorPrueba* conductor)
:Prueba(conductor)
{
}

PruebaCorreccionPlanilla::~PruebaCorreccionPlanilla()
{
}

char* PruebaCorreccionPlanilla::getNombre()const
{
	return "PruebaCorreccionPlanilla";
}

void PruebaCorreccionPlanilla::correrPruebaConcreta()
{
}



