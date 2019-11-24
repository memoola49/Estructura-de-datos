#ifndef _listasimple_
#define _listasimple_

struct nodo{
	int dato;
	struct nodo *sig;
}nodo;

struct nodo* crearlista(struct nodo *lista);
struct nodo* agregar(struct nodo *lista,int ele);
void mostrarlista(struct nodo *lista);
struct nodo *eliminar(struct nodo *lista,int ele);

#endif
