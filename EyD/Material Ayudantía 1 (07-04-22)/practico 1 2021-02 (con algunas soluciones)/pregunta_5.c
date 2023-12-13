#include "pregunta_5.h"

void sort_countries(country* countries, int number_country_registers) 
{
  // Ordenamos el arreglo countries
  // Usamos insertion sort
  int j;
  country value;
  for (int i = 1; i < number_country_registers; i++) {
    value = countries[i]; // guardamos el valor actual (en este caso estructura country actual)
    j = i-1;
    // desplazamos las estructuras a la derecha mientras sean menores a value
    while (j >= 0 && countries[j].cum_positives < value.cum_positives) {
      countries[j + 1] = countries[j];
      j--;
    }
    
    countries[j+1] = value; // ponemos value donde corresponde
  }
}