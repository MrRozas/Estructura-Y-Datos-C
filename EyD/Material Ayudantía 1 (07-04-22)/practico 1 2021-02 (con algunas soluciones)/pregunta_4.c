#include "pregunta_4.h"

country* sort_last_day(country* countries, int number_country_registers, int* number_country_registers_last_day) 
{
  // buscamos la fecha mas grande
  char max_date[11] = "0000-00-00";
  for(int i = 0; i < number_country_registers; i++) {
    if(strcmp(max_date, countries[i].date) < 0) {
      strcpy(max_date, countries[i].date);
    }
  }

  // contamos registros con la fecha mas grande
  int count = 0;
  for(int i = 0; i < number_country_registers; i++) {
    if(strcmp(max_date, countries[i].date) == 0) {
      count++;
    }
  }

  *number_country_registers_last_day = count;
  country *out = (country *)malloc(count * sizeof(country));
  int aux = 0;

  for(int i = 0; i < number_country_registers; i++) {
    if(strcmp(max_date, countries[i].date) == 0) {
      out[aux] = countries[i];
      aux++;
    }
  }

  // Ordenamos el arreglo out
  // Usamos insertion sort
  int j;
  country value;
  for (int i = 1; i < count; i++) {
    value = out[i]; // guardamos el valor actual (en este caso estructura country actual)
    j = i-1;
    // desplazamos las estructuras a la derecha mientras sean menores a value
    while (j >= 0 && out[j].cum_positives < value.cum_positives) {
      out[j + 1] = out[j];
      j--;
    }
    
    out[j+1] = value; // ponemos value donde corresponde
  }

  return out;
}