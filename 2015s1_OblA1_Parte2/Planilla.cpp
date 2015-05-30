#include "Planilla.h"

#ifndef PLANILLA_CPP
#define PLANILLA_CPP

Planilla::Planilla()
{
	//NO IMPLEMENTADO	
}

Planilla::Planilla(const Planilla &p) {
	//NO IMPLEMENTADO	
}

Planilla::~Planilla()
{
	//NO IMPLEMENTADO	
}

Planilla &Planilla::operator=(const Planilla &p) {
	if (this != &p) {
		
		//NO IMPLEMENTADO	
	
	}
	return *this;
}

TipoRetorno Planilla::InsertarHoja(char *nombreHoja)
{	
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

TipoRetorno Planilla::EliminarHoja(char *nombreHoja)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

TipoRetorno Planilla::RenombrarHoja(char *nombreActual, char *nombreNuevo)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

TipoRetorno Planilla::ListarHojas(OrdenListado orden)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}


TipoRetorno Planilla::AsignarExpresionACelda(char *nombreHoja, unsigned int columna, unsigned int fila,  const Expresion &exp)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

TipoRetorno Planilla::EliminarCelda(char *nombreHoja, unsigned int columna, unsigned int fila)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

TipoRetorno Planilla::ListarCeldasEvaluadas(char *nombreHoja, unsigned int columnaDesde, unsigned int filaDesde, 
											unsigned int columnaHasta, unsigned int filaHasta, InterfazDelSistema *interfaz)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

TipoRetorno Planilla::ListarCeldaSinEvaluar(char *nombreHoja, unsigned int columna, unsigned int fila)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}	
	
int Planilla::EvaluarReferencia(InterfazDelSistema *interfaz, char *referencia, bool &error)
{
	//NO IMPLEMENTADO	
	return NO_IMPLEMENTADA;
}

		
#endif