#include "utilities.h"

void print_table(pokemon *p, int N) {
  printf("%*s|", 4 + 7 * w + 7, " ");
  printf("%*s|", w, "Ataque");
  printf("%*s|", w, "Defensa");
  printf("\n");
  printf("%4s|", "ID");
  printf("%*s|", w, "Nombre");
  printf("%*s|", w, "Tipo 1");
  printf("%*s|", w, "Tipo 2");
  printf("%*s|", w, "Total");
  printf("%*s|", w, "HP");
  printf("%*s|", w, "Ataque");
  printf("%*s|", w, "Defensa");
  printf("%*s|", w, "especial");
  printf("%*s|", w, "especial");
  printf("%*s|", w, "Velocidad");
  printf("%*s|", w, "Generacion");
  printf("%*s|", w, "Legendario");
  printf("\n");
  printf("\n");
  for (int i = 0; i < N; i++) {
    print_pokemon(p[i]);
  }
  printf("\n");
}

void print_pokemon(pokemon p) {
  printf("%4d|", p.id);
  printf("%*s|", w, p.nombre);
  printf("%*s|", w, p.tipo1);
  printf("%*s|", w, p.tipo2);
  printf("%*d|", w, p.total);
  printf("%*d|", w, p.hp);
  printf("%*d|", w, p.ataque);
  printf("%*d|", w, p.defensa);
  printf("%*d|", w, p.ataque_especial);
  printf("%*d|", w, p.defensa_especial);
  printf("%*d|", w, p.velocidad);
  printf("%*d|", w, p.generacion);
  printf("%*d|", w, p.legendario);
  printf("\n");
}

int compare_p1(pokemon p1, pokemon p2) {
  if (p2.id != 1) return 0;
  if (strcmp(p2.nombre, "Bulbasaur") != 0) return 0;
  if (strcmp(p2.tipo1, "Grass")) return 0;
  if (strcmp(p2.tipo2, "Poison")) return 0;
  if (p2.total != 318) return 0;
  if (p2.hp != 45) return 0;
  if (p2.ataque != 49) return 0;
  if (p2.defensa != 49) return 0;
  if (p2.ataque_especial != 65) return 0;
  if (p2.defensa_especial != 65) return 0;
  if (p2.velocidad != 45) return 0;
  if (p2.generacion != 1) return 0;
  if (p2.legendario != 0) return 0;

  if (p1.id != 2) return 0;
  if (strcmp(p1.nombre, "Ivysaur") != 0) return 0;
  if (strcmp(p1.tipo1, "Grass") != 0) return 0;
  if (strcmp(p1.tipo2, "Poison") != 0) return 0;
  if (p1.total != 405) return 0;
  if (p1.hp != 60) return 0;
  if (p1.ataque != 62) return 0;
  if (p1.defensa != 63) return 0;
  if (p1.ataque_especial != 80) return 0;
  if (p1.defensa_especial != 80) return 0;
  if (p1.velocidad != 60) return 0;
  if (p1.generacion != 1) return 0;
  if (p1.legendario != 0) return 0;

  return 1;
}

int compare_p2(pokemon *p, int N) {
  int not_visited[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  for (int i = 0; i < N; i++) {
    if (not_visited[0] && p[i].id == 1) {
      if (strcmp(p[i].nombre, "Bulbasaur") != 0) return 0;
      if (strcmp(p[i].tipo1, "Grass")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 318) return 0;
      if (p[i].hp != 45) return 0;
      if (p[i].ataque != 49) return 0;
      if (p[i].defensa != 49) return 0;
      if (p[i].ataque_especial != 65) return 0;
      if (p[i].defensa_especial != 65) return 0;
      if (p[i].velocidad != 45) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[0] = 0;
      continue;
    }
    if (not_visited[1] && p[i].id == 48) {
      if (strcmp(p[i].nombre, "Venonat") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 305) return 0;
      if (p[i].hp != 60) return 0;
      if (p[i].ataque != 55) return 0;
      if (p[i].defensa != 50) return 0;
      if (p[i].ataque_especial != 40) return 0;
      if (p[i].defensa_especial != 55) return 0;
      if (p[i].velocidad != 45) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[1] = 0;
      continue;
    }
    if (not_visited[2] && p[i].id == 49) {
      if (strcmp(p[i].nombre, "Venomoth") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 450) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 65) return 0;
      if (p[i].defensa != 60) return 0;
      if (p[i].ataque_especial != 90) return 0;
      if (p[i].defensa_especial != 75) return 0;
      if (p[i].velocidad != 90) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[2] = 0;
      continue;
    }
    if (not_visited[3] && p[i].id == 131) {
      if (strcmp(p[i].nombre, "Lapras") != 0) return 0;
      if (strcmp(p[i].tipo1, "Water")) return 0;
      if (strcmp(p[i].tipo2, "Ice")) return 0;
      if (p[i].total != 535) return 0;
      if (p[i].hp != 130) return 0;
      if (p[i].ataque != 85) return 0;
      if (p[i].defensa != 80) return 0;
      if (p[i].ataque_especial != 85) return 0;
      if (p[i].defensa_especial != 95) return 0;
      if (p[i].velocidad != 60) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[3] = 0;
      continue;
    }
    if (not_visited[4] && p[i].id == 193) {
      if (strcmp(p[i].nombre, "Yanma") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Flying")) return 0;
      if (p[i].total != 390) return 0;
      if (p[i].hp != 65) return 0;
      if (p[i].ataque != 65) return 0;
      if (p[i].defensa != 45) return 0;
      if (p[i].ataque_especial != 75) return 0;
      if (p[i].defensa_especial != 45) return 0;
      if (p[i].velocidad != 95) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[4] = 0;
      continue;
    }
    if (not_visited[5] && p[i].id == 194) {
      if (strcmp(p[i].nombre, "Wooper") != 0) return 0;
      if (strcmp(p[i].tipo1, "Water")) return 0;
      if (strcmp(p[i].tipo2, "Ground")) return 0;
      if (p[i].total != 210) return 0;
      if (p[i].hp != 55) return 0;
      if (p[i].ataque != 45) return 0;
      if (p[i].defensa != 45) return 0;
      if (p[i].ataque_especial != 25) return 0;
      if (p[i].defensa_especial != 25) return 0;
      if (p[i].velocidad != 15) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[5] = 0;
      continue;
    }
    if (not_visited[6] && p[i].id == 205) {
      if (strcmp(p[i].nombre, "Forretress") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 465) return 0;
      if (p[i].hp != 75) return 0;
      if (p[i].ataque != 90) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 60) return 0;
      if (p[i].defensa_especial != 60) return 0;
      if (p[i].velocidad != 40) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[6] = 0;
      continue;
    }
    if (not_visited[7] && p[i].id == 212) {
      if (strcmp(p[i].nombre, "ScizorMega Scizor") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 150) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 65) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 75) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[7] = 0;
      continue;
    }
    if (not_visited[8] && p[i].id == 228) {
      if (strcmp(p[i].nombre, "Houndour") != 0) return 0;
      if (strcmp(p[i].tipo1, "Dark")) return 0;
      if (strcmp(p[i].tipo2, "Fire")) return 0;
      if (p[i].total != 330) return 0;
      if (p[i].hp != 45) return 0;
      if (p[i].ataque != 60) return 0;
      if (p[i].defensa != 30) return 0;
      if (p[i].ataque_especial != 80) return 0;
      if (p[i].defensa_especial != 50) return 0;
      if (p[i].velocidad != 65) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[8] = 0;
      continue;
    }
    if (not_visited[9] && p[i].id == 251) {
      if (strcmp(p[i].nombre, "Celebi") != 0) return 0;
      if (strcmp(p[i].tipo1, "Psychic")) return 0;
      if (strcmp(p[i].tipo2, "Grass")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 100) return 0;
      if (p[i].ataque != 100) return 0;
      if (p[i].defensa != 100) return 0;
      if (p[i].ataque_especial != 100) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 100) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      not_visited[9] = 0;
      continue;
    }
    return 0;
  }

  return 1;
}

int compare_p3(pokemon *p, int N) {
  for (int i = 0; i < N; i++) {
    if (i == 7 && p[i].id == 1) {
      if (strcmp(p[i].nombre, "Bulbasaur") != 0) return 0;
      if (strcmp(p[i].tipo1, "Grass")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 318) return 0;
      if (p[i].hp != 45) return 0;
      if (p[i].ataque != 49) return 0;
      if (p[i].defensa != 49) return 0;
      if (p[i].ataque_especial != 65) return 0;
      if (p[i].defensa_especial != 65) return 0;
      if (p[i].velocidad != 45) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 8 && p[i].id == 48) {
      if (strcmp(p[i].nombre, "Venonat") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 305) return 0;
      if (p[i].hp != 60) return 0;
      if (p[i].ataque != 55) return 0;
      if (p[i].defensa != 50) return 0;
      if (p[i].ataque_especial != 40) return 0;
      if (p[i].defensa_especial != 55) return 0;
      if (p[i].velocidad != 45) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 4 && p[i].id == 49) {
      if (strcmp(p[i].nombre, "Venomoth") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 450) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 65) return 0;
      if (p[i].defensa != 60) return 0;
      if (p[i].ataque_especial != 90) return 0;
      if (p[i].defensa_especial != 75) return 0;
      if (p[i].velocidad != 90) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 2 && p[i].id == 131) {
      if (strcmp(p[i].nombre, "Lapras") != 0) return 0;
      if (strcmp(p[i].tipo1, "Water")) return 0;
      if (strcmp(p[i].tipo2, "Ice")) return 0;
      if (p[i].total != 535) return 0;
      if (p[i].hp != 130) return 0;
      if (p[i].ataque != 85) return 0;
      if (p[i].defensa != 80) return 0;
      if (p[i].ataque_especial != 85) return 0;
      if (p[i].defensa_especial != 95) return 0;
      if (p[i].velocidad != 60) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 5 && p[i].id == 193) {
      if (strcmp(p[i].nombre, "Yanma") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Flying")) return 0;
      if (p[i].total != 390) return 0;
      if (p[i].hp != 65) return 0;
      if (p[i].ataque != 65) return 0;
      if (p[i].defensa != 45) return 0;
      if (p[i].ataque_especial != 75) return 0;
      if (p[i].defensa_especial != 45) return 0;
      if (p[i].velocidad != 95) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 9 && p[i].id == 194) {
      if (strcmp(p[i].nombre, "Wooper") != 0) return 0;
      if (strcmp(p[i].tipo1, "Water")) return 0;
      if (strcmp(p[i].tipo2, "Ground")) return 0;
      if (p[i].total != 210) return 0;
      if (p[i].hp != 55) return 0;
      if (p[i].ataque != 45) return 0;
      if (p[i].defensa != 45) return 0;
      if (p[i].ataque_especial != 25) return 0;
      if (p[i].defensa_especial != 25) return 0;
      if (p[i].velocidad != 15) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 3 && p[i].id == 205) {
      if (strcmp(p[i].nombre, "Forretress") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 465) return 0;
      if (p[i].hp != 75) return 0;
      if (p[i].ataque != 90) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 60) return 0;
      if (p[i].defensa_especial != 60) return 0;
      if (p[i].velocidad != 40) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 1 && p[i].id == 212) {
      if (strcmp(p[i].nombre, "ScizorMega Scizor") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 150) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 65) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 75) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 6 && p[i].id == 228) {
      if (strcmp(p[i].nombre, "Houndour") != 0) return 0;
      if (strcmp(p[i].tipo1, "Dark")) return 0;
      if (strcmp(p[i].tipo2, "Fire")) return 0;
      if (p[i].total != 330) return 0;
      if (p[i].hp != 45) return 0;
      if (p[i].ataque != 60) return 0;
      if (p[i].defensa != 30) return 0;
      if (p[i].ataque_especial != 80) return 0;
      if (p[i].defensa_especial != 50) return 0;
      if (p[i].velocidad != 65) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 0 && p[i].id == 251) {
      if (strcmp(p[i].nombre, "Celebi") != 0) return 0;
      if (strcmp(p[i].tipo1, "Psychic")) return 0;
      if (strcmp(p[i].tipo2, "Grass")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 100) return 0;
      if (p[i].ataque != 100) return 0;
      if (p[i].defensa != 100) return 0;
      if (p[i].ataque_especial != 100) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 100) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    return 0;
  }

  return 1;
}

int compare_p4(pokemon *p, int N) {
  for (int i = 0; i < N; i++) {
    if (i == 4 && p[i].id == 49) {
      if (strcmp(p[i].nombre, "Venomoth") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Poison")) return 0;
      if (p[i].total != 450) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 65) return 0;
      if (p[i].defensa != 60) return 0;
      if (p[i].ataque_especial != 90) return 0;
      if (p[i].defensa_especial != 75) return 0;
      if (p[i].velocidad != 90) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 2 && p[i].id == 131) {
      if (strcmp(p[i].nombre, "Lapras") != 0) return 0;
      if (strcmp(p[i].tipo1, "Water")) return 0;
      if (strcmp(p[i].tipo2, "Ice")) return 0;
      if (p[i].total != 535) return 0;
      if (p[i].hp != 130) return 0;
      if (p[i].ataque != 85) return 0;
      if (p[i].defensa != 80) return 0;
      if (p[i].ataque_especial != 85) return 0;
      if (p[i].defensa_especial != 95) return 0;
      if (p[i].velocidad != 60) return 0;
      if (p[i].generacion != 1) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 3 && p[i].id == 205) {
      if (strcmp(p[i].nombre, "Forretress") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 465) return 0;
      if (p[i].hp != 75) return 0;
      if (p[i].ataque != 90) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 60) return 0;
      if (p[i].defensa_especial != 60) return 0;
      if (p[i].velocidad != 40) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 1 && p[i].id == 212) {
      if (strcmp(p[i].nombre, "ScizorMega Scizor") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 150) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 65) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 75) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 0 && p[i].id == 251) {
      if (strcmp(p[i].nombre, "Celebi") != 0) return 0;
      if (strcmp(p[i].tipo1, "Psychic")) return 0;
      if (strcmp(p[i].tipo2, "Grass")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 100) return 0;
      if (p[i].ataque != 100) return 0;
      if (p[i].defensa != 100) return 0;
      if (p[i].ataque_especial != 100) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 100) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    return 0;
  }

  return 1;
}

int compare_p5(pokemon *p, int N) {
  for (int i = 0; i < N; i++) {
    if (i == 2 && p[i].id == 205) {
      if (strcmp(p[i].nombre, "Forretress") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 465) return 0;
      if (p[i].hp != 75) return 0;
      if (p[i].ataque != 90) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 60) return 0;
      if (p[i].defensa_especial != 60) return 0;
      if (p[i].velocidad != 40) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 1 && p[i].id == 212) {
      if (strcmp(p[i].nombre, "ScizorMega Scizor") != 0) return 0;
      if (strcmp(p[i].tipo1, "Bug")) return 0;
      if (strcmp(p[i].tipo2, "Steel")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 70) return 0;
      if (p[i].ataque != 150) return 0;
      if (p[i].defensa != 140) return 0;
      if (p[i].ataque_especial != 65) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 75) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    if (i == 0 && p[i].id == 251) {
      if (strcmp(p[i].nombre, "Celebi") != 0) return 0;
      if (strcmp(p[i].tipo1, "Psychic")) return 0;
      if (strcmp(p[i].tipo2, "Grass")) return 0;
      if (p[i].total != 600) return 0;
      if (p[i].hp != 100) return 0;
      if (p[i].ataque != 100) return 0;
      if (p[i].defensa != 100) return 0;
      if (p[i].ataque_especial != 100) return 0;
      if (p[i].defensa_especial != 100) return 0;
      if (p[i].velocidad != 100) return 0;
      if (p[i].generacion != 2) return 0;
      if (p[i].legendario != 0) return 0;
      continue;
    }
    return 0;
  }

  return 1;
}

void valida_pregunta(char p, int is_valid) {
  if (is_valid) {
    printf("\nOK: La respuesta %c está correcta\n\n", p);
  } else {
    printf("NOT OK: La respuesta %c NO ESTÁ correcta\n\n", p);
  }
  printf(
      "ATENCIÓN: Este puntaje corresponde al ejemplo, y no necesariamente será "
      "su nota final en la pregunta. \n");
}