#include "pregunta_5.h"

nodo* eliminar_componente(float valor, char tipo, lista* l) 
{  
    if (l->cabecera == NULL) {
      return;
    }
    
    
  if (l->cabecera->tipo == tipo && l->cabecera->valor == valor) {
        l->cabecera = l->cabecera->sgte;
    }

    nodo *tmp = (nodo *)malloc(sizeof(nodo));
    nodo *it = l->cabecera;
    
    int counter = 1;
    while(it->sgte!= NULL) {
        if (it->sgte->tipo == tipo && it->sgte->valor == valor) { 
          tmp->tipo = it->tipo;
          tmp->valor = it->valor;
          tmp->sgte = NULL;
          it->sgte = it->sgte->sgte;
          return tmp;
        }
        else {
            it = it->sgte;
          counter++;
        }
    }
  return NULL;
}
