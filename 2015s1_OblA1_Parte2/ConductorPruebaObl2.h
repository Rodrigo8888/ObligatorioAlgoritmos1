#ifndef CONDUCTOR_PRUEBA_OBL2_H
#define CONDUCTOR_PRUEBA_OBL2_H

#include "ConductorPrueba.h"
#include "PruebaExpresiones.h"
#include "PruebaPlanilla.h"
#include "PruebasPropias.h"
#include "pruebacorreccionplanilla.h"
#include "PruebacorreccionExpresiones.h"

class ConductorPruebaObl2 : public ConductorPrueba 
{
	public:
		ConductorPruebaObl2();
		virtual ~ConductorPruebaObl2();

	protected:
		virtual void correrPruebaConcreta();
		virtual char* getNombre()const;

	private:
		// Empezar aqui a agregar los archivos de prueba
		Prueba* pruebaExpresiones;
		Prueba* pruebaPlanilla;

		Prueba* pruebaCorreccionExpresiones;
		Prueba* pruebaCorreccionPlanilla;

		Prueba* pruebasPropias;

		/* Ej:
	
		Prueba* miPrueba;

		*/

		// Terminar aqui
};

#endif