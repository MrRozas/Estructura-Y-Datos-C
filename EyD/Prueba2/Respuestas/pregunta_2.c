#include "pregunta_2.h"

void insertar_resistencia(float valor, lista* l) 
{
  nodo *nuevo_nodo = (nodo *)malloc(sizeof(nodo));
  nuevo_nodo->valor = valor;
  nuevo_nodo->tipo = "R";
  struct nodo *tmp = l->cabecera;
  l->cabecera = nuevo_nodo;
  nuevo_nodo->sgte = tmp;
}