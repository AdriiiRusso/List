#include <iostream>

using namespace std;

struct Nodo
{
	Nodo *Siguiente = nullptr;
	Nodo *referencia = nullptr;
	int Valor;
};

struct List
{
	Nodo *Frente = new Nodo;
	Nodo *Fondo = Frente;
	unsigned Nivel = 0;
};

void agregar (List&, int);
void imprimirLista (const List&);
void agregarOrdenado (List&, int);
