#include "InterfazDelSistemaImp.h"

#ifndef INTERFAZ_DEL_SISTEMA_IMP_CPP
#define INTERFAZ_DEL_SISTEMA_IMP_CPP

// Inicialización de los atributos
InterfazDelSistemaImp::InterfazDelSistemaImp()
{
	//NO IMPLEMENTADO	
}

// Eliminación de los objetos creados con "new"
InterfazDelSistemaImp::~InterfazDelSistemaImp()
{
	//NO IMPLEMENTADO	
}


TipoRetorno InterfazDelSistemaImp::InsertarHoja(char *nombreHoja)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::EliminarHoja(char *nombreHoja)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ListarHojas(OrdenListado orden)
{
	return NO_IMPLEMENTADA;
}



TipoRetorno InterfazDelSistemaImp::AsignarExpresionACelda(char *nombreHoja, unsigned int columna, unsigned int fila,  const Expresion &exp)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::EliminarCelda(char *nombreHoja, unsigned int columna, unsigned int fila)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ListarCeldasEvaluadas(char *nombreHoja, unsigned int columnaDesde, unsigned int filaDesde, unsigned int columnaHasta, unsigned int filaHasta)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ListarCeldaSinEvaluar(char *nombreHoja, unsigned int columna, unsigned int fila)
{
	return NO_IMPLEMENTADA;
}	
	
int InterfazDelSistemaImp::EvaluarReferencia(char *referencia, bool &error)
{
	return NO_IMPLEMENTADA;
}


TipoRetorno InterfazDelSistemaImp::RecuperarHoja()
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ListarHojasRecuperar()
{	
	return NO_IMPLEMENTADA;
}

		
#endif