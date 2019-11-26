#ifndef _listaEnlazada_
#define _listaEnlazada_

 struct nodo
{
   int dato;
   struct nodo* sig;
   struct nodo* ant;
}nodo;



struct  nodo * crearLista(struct nodo *lista);
void mostrarLista(struct nodo *lista);
struct nodo * insertar(struct nodo *lista, int elem);
struct nodo * borrar(struct nodo *lista, int elem);

#endif
