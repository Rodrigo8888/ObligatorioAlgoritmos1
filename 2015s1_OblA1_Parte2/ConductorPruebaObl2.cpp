#include "ConductorPruebaObl2.h"

ConductorPruebaObl2::ConductorPruebaObl2()
{
	// Empezar aqui a instanciar los archivos de prueba
	pruebaExpresiones = new PruebaExpresiones(this);

	pruebaPlanilla = new PruebaPlanilla(this);

	pruebaCorreccionPlanilla = new PruebaCorreccionPlanilla(this);

	pruebaCorreccionExpresiones = new PruebaCorreccionExpresiones(this);

	pruebasPropias = new PruebasPropias(this);

	/* Ej:
	
	miPrueba = new MiPrueba(this);

	Recordar que el constructor de la prueba recibe el Conductor

	*/

	// Terminar aqui
}

ConductorPruebaObl2::~ConductorPruebaObl2()
{
	// Empezar aqui a borrar los archivos de prueba
	delete pruebaExpresiones;

	delete pruebaPlanilla;

	delete pruebaCorreccionPlanilla;

	delete pruebaCorreccionExpresiones;

	delete pruebasPropias;

	/* Ej:
	
	delete miPrueba;

	*/

	// Terminar aqui
}

void ConductorPruebaObl2::correrPruebaConcreta()
{
	// Empezar aqui a llamar los metodos de prueba
	pruebaExpresiones->correrPrueba();

	pruebaPlanilla->correrPrueba();

	pruebaCorreccionExpresiones->correrPrueba();

	pruebaCorreccionPlanilla->correrPrueba();

	pruebasPropias->correrPrueba();

	/* Ej:
	
	miPrueba->correrPrueba();

	*/

	// Terminar aqui
}

char* ConductorPruebaObl2::getNombre()const
{
	return "SalidaDeLasPruebas";
}
