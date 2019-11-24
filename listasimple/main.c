#include <stdio.h>
#include "listasimple.h"
#include <stdlib.h>


int main()
{
	struct nodo *lista=crearlista(lista);
	lista=agregar(lista,3);
	lista=agregar(lista,2);
	lista=agregar(lista,1);
	mostrarlista(lista);
	lista=eliminar(lista,3);
	printf("---------\n");
	mostrarlista(lista);
}
