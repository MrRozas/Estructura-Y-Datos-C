#ifndef _P1_UTILITIES_
#define _P1_UTILITIES_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pregunta 5

typedef struct {
  char date[11];
  char code[4];
  char country[50];
  char region[50];
  int cum_positives;
  int cum_dead;
  int cum_recovered;
} region;

typedef struct {
  char date[11];
  char code[4];
  char country[50];
  int cum_positives;
  int cum_dead;
  int cum_recovered;
} country;

void print_regions(region *regions, int N);
void print_countries(country *countries, int N);

#endif