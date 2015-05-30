#include "ManejadorImpresionPrueba.h"

ManejadorImpresionPrueba* ManejadorImpresionPrueba::instanciaManejador = NULL;

ManejadorImpresionPrueba::ManejadorImpresionPrueba()
{

}

ManejadorImpresionPrueba::~ManejadorImpresionPrueba()
{

}

ManejadorImpresionPrueba ManejadorImpresionPrueba::getInstancia()
{
	//if ( instanciaManejador == NULL )
	//	instanciaManejador = new ManejadorImpresionPrueba();

	return ManejadorImpresionPrueba();
}

void ManejadorImpresionPrueba::imprimirResultado(TipoRetorno retorno, TipoRetorno retornoEsperado, char* comentario)const
{
	cout << endl;
	cout << "----------------------------- Testeo --------------------------------" << endl;

	imprimirComentario(comentario);

	imprimirRetorno(retorno,retornoEsperado);

	cout << "---------------------------------------------------------------------" << endl << endl;
}

void ManejadorImpresionPrueba::imprimirComentario(char* comentario)const
{
	if ( comentario != "" )
	{
		cout << "\n  Comentario: " << comentario << endl;
		cout << endl;
	}
}

void ManejadorImpresionPrueba::imprimirRetorno(TipoRetorno retorno, TipoRetorno retornoEsperado)const
{
	cout << "  Retorno de la app.: "<< retorno <<" ->\t"<< getStringRetorno(retorno) << endl;
	
	if ( retorno == retornoEsperado )
	{
		cout << "\t\t.........OK........."<<endl;
	}
	else
	{
		cout << "  Se esperaba.......: "<< retornoEsperado <<" ->\t" << getStringRetorno(retornoEsperado) << endl;
	}
}

char* ManejadorImpresionPrueba::getStringRetorno(TipoRetorno retorno)const
{
	switch( retorno )
	{
		case OK      : { return "OK";					    
					   }
		case ERROR   : { return "ERROR";					    
					   }
		case NO_IMPLEMENTADA : { return "NO_IMPLEMENTADA";					    
							   }
		default: { return "NO_IMPLEMENTADA";					    
				 }
	}
}

void ManejadorImpresionPrueba::imprimirTotalResultados(const EstadisticaPrueba& estadistica)const
{
	cout << endl;
	cout << "  +------------------------------+" << endl;
	cout << "    Pruebas Correctas : " << estadistica.getCantidadCorrectas() << endl;
	cout << "    Pruebas Incorrectas: " << estadistica.getCantidadIncorrectas() << endl;
	cout << "    Pruebas NI: " << estadistica.getCantidadNoImplementadas() << endl;
	cout << "  +------------------------------+" << endl;
	cout << endl;
}