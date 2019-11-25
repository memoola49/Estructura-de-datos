#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main()
{
	struct pila *p;
	int e;
	p=crearpila();
	p=insertar(p,5);
	p=insertar(p,4);
	p=insertar(p,3);
	p=insertar(p,2);
	p=insertar(p,1);
	p=insertar(p,-1);
	
mostrar(p);
	printf("\n");
	e=eliminar(p);
	e=eliminar(p);
	
	mostrar(p);
	
	return 0;
}
