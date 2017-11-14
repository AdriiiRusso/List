#include <iostream>
#include "List.h"

using namespace std;

void agregar (List& a, int x)
{
	if (a.Nivel == 0)
	{
		a.Fondo -> Valor = x;
		a.Nivel ++;
	} 
	else 
	{
		Nodo *q = new Nodo;
		q -> Valor = x;
		q -> referencia = a.Fondo;
		a.Fondo -> Siguiente = q;
		a.Fondo = q;
		a.Nivel ++;
	}
}

void imprimirLista (const List& a)
{
	Nodo *Cuco = a.Frente;
	
	for (unsigned j = 0; j < a.Nivel; j ++)
	{
		cout << Cuco -> Valor << endl;
		Cuco = Cuco -> Siguiente;
	}
}

void agregarOrdenado (List& a, int x)
{
	if (a.Nivel != 0)
	{
		Nodo *viejo = a.Frente;
		Nodo *nuevo = new Nodo;
		
		nuevo -> Valor = x;
		unsigned nivel = 1;
		
		while (nivel <= a.Nivel and nuevo -> Valor > viejo -> Valor)
		{
			if (nivel < a.Nivel)
			{
				viejo = viejo -> Siguiente;
			}
			nivel ++;
		}
		
		nuevo -> Siguiente = viejo;
		
		if (nivel > 1)
		{
			viejo -> referencia -> Siguiente = nuevo;
		} 
		else
		{
			a.Frente = nuevo;
		}
		
		nuevo -> referencia = viejo -> referencia;
		viejo -> referencia = nuevo;
		
		a.Nivel ++;
	}
	else 
	{
		a.Fondo -> Valor = x;
		a.Nivel ++;
	}
}
