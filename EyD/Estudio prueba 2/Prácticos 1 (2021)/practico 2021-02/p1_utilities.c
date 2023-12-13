#include "p1_utilities.h"

void print_regions(region *regions, int N) {
  for (int i = 0; i < N; i++) {
    printf("%s, ", regions[i].date);
    printf("%s, ", regions[i].code);
    printf("%s, ", regions[i].country);
    printf("%s, ", regions[i].region);
    printf("%i, ", regions[i].cum_positives);
    printf("%i, ", regions[i].cum_dead);
    printf("%i\n", regions[i].cum_recovered);
  }
}

void print_countries(country *countries, int N) {
  for (int i = 0; i < N; i++) {
    printf("%s, ", countries[i].date);
    printf("%s, ", countries[i].code);
    printf("%s, ", countries[i].country);
    printf("%i, ", countries[i].cum_positives);
    printf("%i, ", countries[i].cum_dead);
    printf("%i\n", countries[i].cum_recovered);
  }
}