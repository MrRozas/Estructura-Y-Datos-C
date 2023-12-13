#include "utilities.h"

void mostrar_jerarquia(investigador *raiz) {
  if (raiz == NULL) return;
  printf("%s (%i): ", raiz->nombre, raiz->numero_discipulos);
  for (int i = 0; i < raiz->numero_discipulos; i++) {
    printf("%s, ", raiz->discipulos[i]->nombre);
  }
  printf("\n");
  for (int i = 0; i < raiz->numero_discipulos; i++) {
    mostrar_jerarquia(raiz->discipulos[i]);
  }
}

void mostrar_investigador(investigador *i) {
  printf("%s (%i): ", i->nombre, i->numero_discipulos);
  if (i->numero_discipulos == 0) {
    printf("Este investigador no tiene discipulos");
  } else {
    for (int j = 0; j < i->numero_discipulos; j++) {
      printf("%s, ", i->discipulos[j]->nombre);
    }
  }
  printf("\n");
}