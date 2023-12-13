#include "utilities.h"
#if pregunta == 1
#include "pregunta_1.h"
#elif pregunta == 2
#include "pregunta_2.h"
#elif pregunta == 3
#include "pregunta_3.h"
#elif pregunta == 4
#include "pregunta_4.h"
#elif pregunta == 5
#include "pregunta_5.h"
#endif
int main(int argc, char* argv[]) {
#if pregunta == 1
  // 1.- swap
  pokemon p[2];

  p[0].id = 1;
  strcpy(p[0].nombre, "Bulbasaur");
  strcpy(p[0].tipo1, "Grass");
  strcpy(p[0].tipo2, "Poison");
  p[0].total = 318;
  p[0].hp = 45;
  p[0].ataque = 49;
  p[0].defensa = 49;
  p[0].ataque_especial = 65;
  p[0].defensa_especial = 65;
  p[0].velocidad = 45;
  p[0].generacion = 1;
  p[0].legendario = 0;

  p[1].id = 2;
  strcpy(p[1].nombre, "Ivysaur");
  strcpy(p[1].tipo1, "Grass");
  strcpy(p[1].tipo2, "Poison");
  p[1].total = 405;
  p[1].hp = 60;
  p[1].ataque = 62;
  p[1].defensa = 63;
  p[1].ataque_especial = 80;
  p[1].defensa_especial = 80;
  p[1].velocidad = 60;
  p[1].generacion = 1;
  p[1].legendario = 0;

  printf("PRE-SWAP\n");
  print_table(p, 2);
  swap(&p[0], &p[1]);
  printf("POS-SWAP\n");
  print_table(p, 2);

  valida_pregunta('1', compare_p1(p[0], p[1]));

#elif pregunta == 2
  int N;
  pokemon* p = leer_archivo("pokemon.csv", &N);
  print_table(p, N);
  valida_pregunta('2', compare_p2(p, N));
#elif pregunta == 3
#include "pokemones.c"
  pokemon* pokes = ordenar_pokemones(p, 10);
  print_table(pokes, 10);
  valida_pregunta('3', compare_p3(pokes, 10));
#elif pregunta == 4
#include "pokemones.c"
  pokemon* pokes = N_mejores(p, 10, 5);
  print_table(pokes, 5);
  valida_pregunta('4', compare_p4(pokes, 5));
#elif pregunta == 5
#include "pokemones.c"
  pokemon* pokes = N_mejores_generacion(p, 10, 3, 2);
  print_table(pokes, 3);
  valida_pregunta('5', compare_p5(pokes, 3));
#endif

  return 0;
}