#include "pregunta_2.h"

pokemon* leer_archivo(char* filename, int* N) {
  FILE *the_file;
  the_file = fopen(filename,"r");

  pokemon *datos = (pokemon*) malloc(5000*sizeof(pokemon));

  char line[1000];
  char *sp;
  int i = 1;

  while (fgets(line, 1000, the_file) != NULL){
    sp = strtok(line, ",");
    datos[i].id = atoi(sp);
    sp = strtok(NULL, ",");
    strcpy(datos[i].nombre, sp);
    sp = strtok(NULL, ",");
    strcpy(datos[i].tipo1, sp);
    sp = strtok(NULL, ",");
    strcpy(datos[i].tipo2, sp);
    sp = strtok(line, ",");
    datos[i].total = atoi(sp);
    sp = strtok(line, ",");
    datos[i].hp = atoi(sp);
    sp = strtok(line, ",");
    datos[i].ataque = atoi(sp);
    sp = strtok(line, ",");
    datos[i].defensa = atoi(sp);
    sp = strtok(line, ",");
    datos[i].ataque_especial = atoi(sp);
    sp = strtok(line, ",");
    datos[i].defensa_especial = atoi(sp);
    sp = strtok(line, ",");
    datos[i].velocidad = atoi(sp);
    sp = strtok(line, ",");
    datos[i].generacion = atoi(sp);
    sp = strtok(line, ",");
    datos[i].legendario = atoi(sp);

    i++;
  }
  fclose(the_file);
  return NULL; 
}