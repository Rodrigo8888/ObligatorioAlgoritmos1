#ifndef PLANILLA_H
#define PLANILLA_H

class InterfazDelSistema;

#include "Constantes.h"
#include "Expresion.h"
#include "Cadena.h"



class Planilla 
{
public:
	
	// Constructor por defecto
	Planilla();
	
	// Constructor copia
	Planilla(const Planilla &p);

	// Destructor
	~Planilla();

	// Operador de asignacion
	Planilla &operator=(const Planilla &p);


	// VER Ver la especificación completa de los diferentes comandos en 
	// la letra del obligatorio.
	TipoRetorno InsertarHoja(char *nombreHoja);
	TipoRetorno EliminarHoja(char *nombreHoja);
	TipoRetorno RenombrarHoja(char *nombreActual, char *nombreNuevo);
	TipoRetorno ListarHojas(OrdenListado orden);

	TipoRetorno AsignarExpresionACelda(char *nombreHoja, unsigned int columna, unsigned int fila,  const Expresion &exp);
	TipoRetorno EliminarCelda(char *nombreHoja, unsigned int columna, unsigned int fila);

	TipoRetorno ListarCeldasEvaluadas(char *nombreHoja, unsigned int columnaDesde, unsigned int filaDesde, 
		unsigned int columnaHasta, unsigned int filaHasta, InterfazDelSistema *interfaz);
	TipoRetorno ListarCeldaSinEvaluar(char *nombreHoja, unsigned int columna, unsigned int fila);	
	
	int EvaluarReferencia(InterfazDelSistema *interfaz, char *referencia, bool &error);

private:

	// Atributos

};

#endif