#include "pregunta_3.h"

void insertar_capacitancia(float valor, lista* l) 
{

  nodo *nuevo_nodo;
  // insertamos al final de la lista head
  if (l->centinela == NULL) { 
    nuevo_nodo = (nodo *)malloc(sizeof(nodo));
    nuevo_nodo->valor = valor; 
    nuevo_nodo->tipo = "C";
    nuevo_nodo->sgte = NULL; 
    l->centinela = nuevo_nodo;  
  }
  else { 
    nodo *it = l->centinela;
    while(it->sgte != NULL) { //Se recorre hasta llegar a null.
      it = it->sgte;
    }
    nuevo_nodo = (nodo *)malloc(sizeof(nodo)); //Se crea un nuevo nodo y se le dan valores
    nuevo_nodo->valor = valor; 
    nuevo_nodo->tipo = "C";
    nuevo_nodo->sgte = NULL; 
    it->sgte = nuevo_nodo; 
  }
}