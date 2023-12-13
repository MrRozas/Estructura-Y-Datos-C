#ifndef _P1_UTILITIES_
#define _P1_UTILITIES_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pregunta 5

typedef struct n {
  int ID;
  char nombre[80];
  struct n **discipulos;
  int numero_discipulos;
} investigador;

void mostrar_jerarquia(investigador *raiz);
void mostrar_investigador(investigador *i);

#endif