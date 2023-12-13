#include "p1_utilities.h"
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
  // 1.- Leer archivo
  int number_of_registers = 0;
  region* regions = read_regions("data.csv", &number_of_registers);
  print_regions(regions, number_of_registers);
#elif pregunta == 2
  // 2.- Crear arreglo de paises
  int number_of_registers = 436;
  region regions[436];
  int number_country_registers;
#include "fill.h"
  country* countries = create_countries_by_date(regions, number_of_registers,
                                                &number_country_registers);
  print_countries(countries, number_country_registers);
#elif pregunta == 3
  // 3.- swap
  country gbr, che;
  strcpy(gbr.date, "2020-03-03");
  strcpy(gbr.code, "GBR");
  strcpy(gbr.country, "United Kingdom");
  gbr.cum_positives = 10;
  gbr.cum_dead = 0;
  gbr.cum_recovered = 0;
  strcpy(che.date, "2020-03-03");
  strcpy(che.code, "CHE");
  strcpy(che.country, "Switzerland");
  che.cum_positives = 9;
  che.cum_dead = 0;
  che.cum_recovered = 0;

  swap(&gbr, &che);

  printf("%s, ", gbr.date);
  printf("%s, ", gbr.code);
  printf("%s, ", gbr.country);
  printf("%i, ", gbr.cum_positives);
  printf("%i, ", gbr.cum_dead);
  printf("%i\n", gbr.cum_recovered);

  printf("%s, ", che.date);
  printf("%s, ", che.code);
  printf("%s, ", che.country);
  printf("%i, ", che.cum_positives);
  printf("%i, ", che.cum_dead);
  printf("%i\n", che.cum_recovered);

#elif pregunta == 4
  // 4.- Ordenar según afectados en el último día

  country countries[68];
  int number_country_registers = 68;
  int number_country_registers_last_day;
#include "fill2.h"
  country* countries_last_day = sort_last_day(
      countries, number_country_registers, &number_country_registers_last_day);
  print_countries(countries_last_day, number_country_registers_last_day);
#elif pregunta == 5
  // 5.- Ordenar según afectados para cada día
  country countries[68];
  int number_country_registers = 68;
#include "fill2.h"
  sort_countries(countries, number_country_registers);
  print_countries(countries, number_country_registers);
#endif

  return 0;
}