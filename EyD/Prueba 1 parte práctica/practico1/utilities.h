#ifndef _P1_UTILITIES_
#define _P1_UTILITIES_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pregunta 1
#define w 15

typedef struct n {
  int id;
  char nombre[80];
  char tipo1[80];
  char tipo2[80];
  int total;
  int hp;
  int ataque;
  int defensa;
  int ataque_especial;
  int defensa_especial;
  int velocidad;
  int generacion;
  int legendario;  // 0: False 1:True
} pokemon;

void print_table(pokemon* p, int N);
void print_pokemon(pokemon p);
void valida_pregunta(char p, int is_valid);
int compare_p1(pokemon p1, pokemon p2);
int compare_p2(pokemon* p, int N);
int compare_p3(pokemon* p, int N);
int compare_p4(pokemon* p, int N);
int compare_p5(pokemon* p, int N);

#endif