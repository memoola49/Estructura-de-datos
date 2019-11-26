#include <stdlib.h>
#include<stdio.h>
#include "listadoble.h"

void manejarError(int);

struct nodo * crearLista(struct nodo *lista)
{
   lista=NULL;
   return lista;
}



struct nodo * insertar(struct nodo * lista, int elem)
{
struct nodo *nvo=(struct nodo *)malloc(sizeof(struct nodo));
struct nodo *aux,*aux2;
nvo->ant=NULL;
nvo->sig=NULL;   
   nvo->dato=elem;
   nvo->sig=NULL;
   if(lista==NULL)
   {
      lista=nvo;
      return lista;
   }
   else
   {
      aux=lista;
      while(aux!=NULL)
      {
         aux2=aux;
         aux=aux->sig;
      }
      aux2->sig=nvo;
      nvo->ant=aux2;
      nvo->sig=aux;
      return lista;
   }
   
}

struct nodo * borrar(struct nodo *lista, int elem)
{
   struct nodo *aux;
	struct nodo *aux2;
   if(lista==NULL)
   {
      printf("Lista vacia \n");
      exit(0);
   }
   else
   {
      aux=lista;
      aux2=lista;
      while(aux!=NULL && aux->dato!=elem)
      {
         aux2=aux;
         aux=aux->sig;
      }
      if(aux==NULL)
	  {
	  	printf("EL ELEMENTO %d NO SE ENCUENTRA EN LA LISTA \n",elem);
	  } else if(aux==aux2)
      {
         lista=aux->sig;
         if(aux->sig!=NULL)
         	lista->ant=NULL;
         	printf("El elemento %d ha sido borrado \n",aux->dato);
         	free(aux);
		 }
		 else
		 {
		 	aux2->sig=aux->sig;
		 	if(aux->sig!=NULL)
		 	aux->sig->ant=aux->ant;
		 	printf("El elemento %d ha sido borrado \n",aux->dato);
		 	free(aux);
		 }
		 return lista;
      }
      return lista;
      
}
void mostrarLista(struct nodo *lista)
{
	struct nodo *aux;
   int pos;
   if(lista==NULL)
   {
      printf("Lista Vacia\n");
   }
   else
   {
      aux=lista;
      pos=0;
      while(aux!=NULL)
      {
         printf("NODO %d = %d\n",pos, aux->dato);
         aux=aux->sig;
         pos++;
      }
   }
}
