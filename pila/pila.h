#ifndef _pila_
#define _pila_

struct nodo
{
	int dato;
	struct nodo *anterior;
}nodo;

struct pila
{
	struct nodo *tope;
	
}pila;


struct pila *crearpila();
struct pila *insertar(struct pila *p,int e);
int eliminar(struct pila *p);
int tope(struct pila *p);
void mostrar(struct pila *p);
#endif
