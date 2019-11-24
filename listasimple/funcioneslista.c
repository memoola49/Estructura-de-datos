#include "listasimple.h"
#include <stdlib.h>
#include <stdio.h>

struct nodo* crearlista(struct nodo *lista)
{
	lista=NULL;
	return lista;
}

struct nodo* agregar(struct nodo *lista,int ele)
{
	
	struct nodo *nuevo;
	nuevo=(struct nodo *)malloc(sizeof(struct nodo));
	struct nodo *aux;
	nuevo->dato=ele;
	nuevo->sig=NULL;
	if(lista==NULL)
	{
		lista=nuevo;
		return lista;
	}
	else{
	aux=lista;
	
		nuevo->sig=aux;
	return nuevo;
	}
	
}
void mostrarlista(struct nodo *lista)
{
	struct nodo *aux;

   if(lista==NULL)
   {
     printf("no hay elementos en la lista \n");
   }
   else
   {
      aux=lista;
      while(aux!=NULL)
      {
         printf(": %d \n", aux->dato);
         aux=aux->sig;
      }
   }
}

struct nodo *eliminar(struct nodo *lista,int ele)
{
	struct nodo *aux1,*aux2;
	
	if(lista==NULL)
	{
		printf("lista vacia \n");
	}
	else {
		aux1=lista;
	aux2=lista;
	while(aux1!=NULL && aux1->dato!=ele)
	{
		aux2=aux1;
		aux1=aux1->sig;
	}
	if(aux1==lista)
	{
		lista=aux1->sig;
		free(aux1);
		return lista;
	}
	else{
		aux2->sig=aux1->sig;
		free(aux1);
		return lista;
	}
		
	}
}
