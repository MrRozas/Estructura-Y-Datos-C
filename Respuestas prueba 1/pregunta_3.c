#include "pregunta_3.h"

pokemon* ordenar_pokemones(pokemon* pokemones, int N) { 
  int aux;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N-1; j++) {
      if (pokemones[j].total > pokemones[j+1].total) {
        // swap entre arreglo[j] y arreglo[j+1]
        aux = pokemones[j].total;
        pokemones[j].total = pokemones[j+1].total;
        pokemones[j+1].total = aux;
  return NULL; 
}
}
}
}