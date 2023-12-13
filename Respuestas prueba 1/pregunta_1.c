#include "pregunta_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Función que recibe como argumento dos estructuras de tipo pokemon. La función no retorna nada e intercambia el contenido de ambas estructuras.
void swap(pokemon* p1, pokemon* p2) {
  //int *value;
  //char *nombre;
  pokemon temp[1];

  temp[0].id = 1;
  strcpy(temp[0].nombre, "Bulbasaur");
  strcpy(temp[0].tipo1, "Grass");
  strcpy(temp[0].tipo2, "Poison");
  temp[0].total = 318;
  temp[0].hp = 45;
  temp[0].ataque = 49;
  temp[0].defensa = 49;
  temp[0].ataque_especial = 65;
  temp[0].defensa_especial = 65;
  temp[0].velocidad = 45;
  temp[0].generacion = 1;
  temp[0].legendario = 0;
  
  memcpy(p1, p2, 1000);
  memcpy(p2, temp, 1000);
  
  
  
  
  

}