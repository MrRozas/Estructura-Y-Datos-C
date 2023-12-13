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
  investigador* i1 = crear_investigador(0, "Maestro Roshi");
  investigador* i2 = crear_investigador(1, "Goku");

  i1->discipulos = (investigador**)realloc(i1->discipulos, 1);
  i1->discipulos[0] = i2;
  i1->numero_discipulos++;
  mostrar_investigador(i1);
  mostrar_investigador(i2);

#elif pregunta == 2
  investigador* raiz;

  raiz = insertar_investigador(raiz, 0, "Goku", -1);
  raiz = insertar_investigador(raiz, 1, "Gohan", 0);
  raiz = insertar_investigador(raiz, 2, "Roshi", 1);
  raiz = insertar_investigador(raiz, 3, "Dieciocho", 1);
  raiz = insertar_investigador(raiz, 4, "Pan", 2);
  mostrar_jerarquia(raiz);
#elif pregunta == 3
  investigador i1, i2, i3, i4, i5, i6;
  investigador *dis1[2] = {&i2, &i6};
  investigador *dis2[3] = {&i3, &i4, &i5};

  i1.numero_discipulos = 2;
  i1.ID = 0;
  strcpy(i1.nombre, "Goku");
  i2.numero_discipulos = 3;
  i2.ID = 1;
  strcpy(i2.nombre, "Gohan");
  i3.numero_discipulos = 0;
  i3.ID = 2;
  strcpy(i3.nombre, "Roshi");
  i4.numero_discipulos = 0;
  i4.ID = 3;
  strcpy(i4.nombre, "Bulma");
  i5.numero_discipulos = 0;
  i5.ID = 4;
  strcpy(i5.nombre, "Dieciocho");
  i6.numero_discipulos = 0;
  i6.ID = 5;
  strcpy(i6.nombre, "Pan");

  i1.discipulos = dis1;
  i2.discipulos = dis2;

  mostrar_jerarquia(&i1);
  printf("Goku tiene %i discipulos\n", cantidad_discipulos(&i1, 0));
  printf("Gohan tiene %i discipulos\n", cantidad_discipulos(&i1, 1));
  printf("menos uno: %i \n", cantidad_discipulos(&i1, 10));
#elif pregunta == 4
  investigador i1, i2, i3, i4, i5, i6;
  investigador *dis1[1] = {&i2};
  investigador *dis2[3] = {&i3, &i4, &i5};
  investigador *dis3[1] = {&i6};

  i1.numero_discipulos = 1;
  i1.ID = 0;
  strcpy(i1.nombre, "Goku");
  i2.numero_discipulos = 3;
  i2.ID = 1;
  strcpy(i2.nombre, "Gohan");
  i3.numero_discipulos = 1;
  i3.ID = 2;
  strcpy(i3.nombre, "Roshi");
  i4.numero_discipulos = 0;
  i4.ID = 3;
  strcpy(i4.nombre, "Bulma");
  i5.numero_discipulos = 0;
  i5.ID = 4;
  strcpy(i5.nombre, "Dieciocho");
  i6.numero_discipulos = 0;
  i6.ID = 5;
  strcpy(i6.nombre, "Pan");

  i1.discipulos = dis1;
  i2.discipulos = dis2;
  i3.discipulos = dis3;

  mostrar_jerarquia(&i1);
  printf("Investigador con más discipulos: %s\n",
         investigador_con_mas_discipulos(&i1)->nombre);
#elif pregunta == 5
  investigador i1, i2, i3, i4, i5, i6;
  investigador *dis1[2] = {&i2, &i6};
  investigador *dis2[3] = {&i3, &i4, &i5};

  i1.numero_discipulos = 2;
  i1.ID = 0;
  strcpy(i1.nombre, "Goku");
  i2.numero_discipulos = 3;
  i2.ID = 1;
  strcpy(i2.nombre, "Gohan");
  i3.numero_discipulos = 0;
  i3.ID = 2;
  strcpy(i3.nombre, "Roshi");
  i4.numero_discipulos = 0;
  i4.ID = 3;
  strcpy(i4.nombre, "Bulma");
  i5.numero_discipulos = 0;
  i5.ID = 4;
  strcpy(i5.nombre, "Dieciocho");
  i6.numero_discipulos = 0;
  i6.ID = 5;
  strcpy(i6.nombre, "Pan");

  i1.discipulos = dis1;
  i2.discipulos = dis2;

  mostrar_jerarquia(&i1);
  printf("Cantidad de investigadores sin discipulos: %i\n",
         cantidad_de_investigadores_sin_discipulos(&i1));
#endif

  return 0;
}