#include <iostream>
#include <assert.h>
#include "List.h"

using namespace std;

int main ()
{
	List a;
	
	assert (a.Nivel == 0);
	
	agregar (a, 1);
	agregar (a, 3);
	agregar (a, 4);
	agregar (a, 6);
	agregar (a, 7);
	agregar (a, 9);
	
	imprimirLista (a);
	
	cout << endl;
	
	agregarOrdenado (a, 2);
	agregarOrdenado (a, 5);
	agregarOrdenado (a, 3);
	agregarOrdenado (a, 0);
	agregarOrdenado (a, 46);
	
	assert (a.Nivel == 11);
	
	imprimirLista (a);
}
