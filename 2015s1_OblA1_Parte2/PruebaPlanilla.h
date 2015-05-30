#ifndef PRUEBAPLANILLA_H
#define PRUEBAPLANILLA_H

#include "Prueba.h"
#include "ConductorPrueba.h"
#include "InterfazDelSistemaImp.h"
#include "ExpresionImp.h"

class PruebaPlanilla : public Prueba  
{

	public:
		PruebaPlanilla(ConductorPrueba* conductor);
		virtual ~PruebaPlanilla();
		virtual void correrPruebaConcreta();

	protected:
		virtual char* getNombre()const;

	private:
};

#endif