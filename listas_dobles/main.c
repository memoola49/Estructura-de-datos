#include <stdlib.h>
#include<stdio.h>
#include "listadoble.h"

int main()
{
	struct nodo *lista;
	lista=crearLista(lista);
	lista=insertar(lista,1);
	lista=insertar(lista,2);
	lista=insertar(lista,3);
	lista=insertar(lista,4);
	mostrarLista(lista);
	lista=borrar(lista,2);
	printf("\n\n");
	mostrarLista(lista);
	
	return 0;
}
