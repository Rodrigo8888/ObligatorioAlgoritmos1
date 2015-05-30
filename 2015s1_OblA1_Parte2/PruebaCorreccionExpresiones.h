#ifndef PRUEBA_CORRECCION_EXP_H
#define PRUEBA_CORRECCION_EXP_H

#include "Prueba.h"
#include "ConductorPrueba.h"
#include "ExpresionImp.h"

class PruebaCorreccionExpresiones : public Prueba  
{

	public:
		PruebaCorreccionExpresiones(ConductorPrueba* conductor);
		virtual ~PruebaCorreccionExpresiones();
		virtual void correrPruebaConcreta();

	protected:
		virtual char* getNombre()const;

	private:

};

#endif
