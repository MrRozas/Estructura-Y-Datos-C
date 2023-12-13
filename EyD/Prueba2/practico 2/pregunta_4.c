#include "pregunta_4.h"
#include <string.h>
#define RESISTENCIA 'R'
#define CAPACITANCIA 'C'

int contar_componentes(char tipo, lista* l) 
{
  int count = 0;
  nodo *it = l->cabecera;
  while(it!=NULL){
    if(it->tipo == tipo){
    count++;
    it = it->sgte;
    }
    else{
      it = it->sgte;
    }
  }
  return count;
}
