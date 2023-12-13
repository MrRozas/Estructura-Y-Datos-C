#include "pregunta_1.h"

lista* crear_tubo() 
{
  lista *out = (lista *)malloc(sizeof(lista));
  out->cabecera = NULL;
  out->centinela = NULL;
    
  return out; 
}