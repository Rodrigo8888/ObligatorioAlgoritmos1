#ifndef INTERFAZ_DEL_SISTEMA_IMP_H
#define INTERFAZ_DEL_SISTEMA_IMP_H

class Planilla;
#include "Planilla.h"

#include "Constantes.h"
#include "InterfazDelSistema.h"


class InterfazDelSistemaImp  : public InterfazDelSistema
{
public:
	
	InterfazDelSistemaImp();
	~InterfazDelSistemaImp();

			
	TipoRetorno InsertarHoja(char *nombreHoja);
	TipoRetorno EliminarHoja(char *nombreHoja);
	TipoRetorno ListarHojas(OrdenListado orden);

	TipoRetorno AsignarExpresionACelda(char *nombreHoja, unsigned int columna, unsigned int fila,  const Expresion &exp);
	TipoRetorno EliminarCelda(char *nombreHoja, unsigned int columna, unsigned int fila);	
	TipoRetorno ListarCeldasEvaluadas(char *nombreHoja, unsigned int columnaDesde, unsigned int filaDesde, unsigned int columnaHasta, unsigned int filaHasta);
	TipoRetorno ListarCeldaSinEvaluar(char *nombreHoja, unsigned int columna, unsigned int fila);	
	
	int EvaluarReferencia(char *referencia, bool &error);

	TipoRetorno RecuperarHoja();
	TipoRetorno ListarHojasRecuperar();

private:

	// Atributos

};

#endif
