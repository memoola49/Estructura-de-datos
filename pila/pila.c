#include "pila.h"
#include <stdio.h>
#include <stdlib.h>


struct pila *crearpila()
{
struct pila *p=(struct pila *)malloc(sizeof(struct pila));
if(p==NULL)
{
	printf("no hay memoria \n");
	exit(0);
}
p->tope=NULL;
return p;
	
}

struct pila *insertar(struct pila *p,int e)
{
	struct nodo *nv;
	nv=(struct nodo *)malloc(sizeof(struct nodo));
	if(nv==NULL)
{
	printf("no hay memoria \n");
	exit(0);
}
nv->dato=e;
nv->anterior=p->tope;
p->tope=nv;
return p;

}


int eliminar(struct pila *p){
	
	int e;
	struct nodo *aux;
	if(p==NULL)
	{
		printf("no hay memoria \n");
		exit(0);
	}
	aux=p->tope;
	e=aux->dato;
	p->tope=aux->anterior;
	free(aux);
	return e;
	
}

int tope(struct pila *p)
{
	int e;
	if(p==NULL)
	{
		printf("no hay memoria \n");
		exit(0);
	}
	e=p->tope->dato;
	return e;
}

void mostrar (struct pila *p)
{
	struct pila *aux;
	aux=crearpila(aux);
	int e;
	while(p->tope!=NULL)
	{
		e=eliminar(p);
		printf("%d ",e);
		aux=insertar(aux,e);
		
	}
	while(aux->tope!=NULL)
	{
		e=eliminar(aux);
		p=insertar(p,e);
	}
	
	
	

	
	
}
