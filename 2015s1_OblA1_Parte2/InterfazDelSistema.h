#ifndef INTERFAZ_DEL_SISTEMA_H
#define INTERFAZ_DEL_SISTEMA_H

#include "Constantes.h"
#include "Expresion.h"

/*	
	Todos los métodos retornan un enumerado correspondiente a si la operación 
	se pudo realizar correctamente, hubo un error o no fue implementada.
   

	NOTA:
			Ver la especificación completa de los diferentes comandos en 
			la letra del obligatorio.

*/

class Expresion;

class InterfazDelSistema abstract
{
	
	public:

		virtual ~InterfazDelSistema() {};

		/*
		*	Crea e inserta una hoja de cálculo en la planilla, 
		*	la cual tendrá como nombre nombreHoja
		*/
		virtual TipoRetorno InsertarHoja(char *nombreHoja) abstract;
		
		/*
		*	Elimina la hoja de nombre nombreHoja de la planilla, 
		*	si ésta existe, y todos los datos que están almacenados en ella.  
		*/
		virtual TipoRetorno EliminarHoja(char *nombreHoja) abstract;

		/*
		*	Lista todas las hojas que forman la planilla (solo el nombre) en orden alfabético (orden = ALFABETICO)
		*	o en el orden en que se crearon (orden = DECREACION). Se deberá mostrar cada hoja en una nueva línea.
		*	Si no existen hojas, se deberá mostrar un mensaje que lo indique.
		*/
		virtual TipoRetorno ListarHojas(OrdenListado orden) abstract;

		/*
		*	Asigna la expresión aExp en la hoja, columna y fila recibidas como parámetro.
		*	Si la celda ya contiene una expresión, se debe eliminar e insertar la nueva expresión.
		*/
		virtual TipoRetorno AsignarExpresionACelda(char *nombreHoja, unsigned int columna, unsigned int fila, const Expresion &aExp) abstract;

		/*
		*	Retorna la celda a su valor por defecto (0), en la hoja, columna y fila recibidas como parámetro.
		*/
		virtual TipoRetorno EliminarCelda(char *nombreHoja, unsigned int columna, unsigned int fila) abstract;
		
		/*
		*	Muestra el resultado de evaluar las celdas del rango especificado.
		*	Los datos de cada columna se mostrarán separados por un tabulador y las filas separadas por un fin de línea.
		*/
		virtual TipoRetorno ListarCeldasEvaluadas(char *nombreHoja, unsigned int columnaDesde, unsigned int filaDesde, unsigned int columnaHasta, unsigned int filaHasta) abstract;

		/*
		*	Muestra la fórmula de la celda en la hoja y posición especificada.
		*/
		virtual TipoRetorno ListarCeldaSinEvaluar(char *nombreHoja, unsigned int columna, unsigned int fila) abstract;

		/*
		*	Evalúa la referencia recibida. La referencia es un string que contiene el nombre de una hoja, el nombre de una columna y el número de fila. 
		*	Recordar que la celda por defecto tiene el valor cero. El formato es el siguiente, primero se encuentra el nombre de la hoja, 
		*	luego un carácter signo de exclamación '!', luego el número de columna, el carácter dos puntos ':' y finalmente el número de fila.
		*/
		virtual int EvaluarReferencia(char *referencia, bool &error) abstract;

		/*
		*	Recupera la última hoja eliminada.
		*/
		virtual TipoRetorno RecuperarHoja() abstract;

		/*
		*	Lista todas las hojas que están guardadas para recuperar. 
			Primero deben aparecer las hojas más recientemente borradas.
		*/
		virtual TipoRetorno ListarHojasRecuperar() abstract;

};

#endif 