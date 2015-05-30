#include "PruebasPropias.h"

PruebasPropias::PruebasPropias(ConductorPrueba* conductor)
:Prueba(conductor)
{
}

PruebasPropias::~PruebasPropias()
{
}
char* PruebasPropias::getNombre()const
{
	return "PruebasPropias";
}

void PruebasPropias::correrPruebaConcreta()
{
	
	InterfazDelSistema* interfaz = new InterfazDelSistemaImp();

	interfaz->InsertarHoja("H2");
	interfaz->InsertarHoja("H3");
	interfaz->InsertarHoja("H1");

	interfaz->ListarHojas(ALFABETICO);

	delete interfaz;
}

