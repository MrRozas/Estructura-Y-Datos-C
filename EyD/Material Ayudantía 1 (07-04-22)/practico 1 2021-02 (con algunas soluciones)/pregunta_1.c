#include "pregunta_1.h"

region* read_regions(char* filename, int* number_of_registers) 
{ 
    FILE *fp = fopen(filename, "r");
    char line[1000];
    int count = 0;
    
    // contamos la cantidad de lineas
    while (fgets(line, 1000, fp) != NULL) {
        count++;
    }
        
    fclose(fp);
    count--; // ignoramos la cabecera
    *number_of_registers = count;
  
    region *out = (region*)malloc(count * sizeof(region));

    fp = fopen(filename, "r");
    count = 0;
    fgets(line, 1000, fp); // ignoramos la cabecera
    while (fgets(line, 1000, fp) != NULL) {
        strcpy(out[count].date, strtok(line, ","));
        strcpy(out[count].code, strtok(NULL, ","));
        strcpy(out[count].country, strtok(NULL, ","));
        strcpy(out[count].region, strtok(NULL, ","));
        out[count].cum_positives = atoi(strtok(NULL, ","));
        out[count].cum_dead = atoi(strtok(NULL, ","));
        out[count].cum_recovered = atoi(strtok(NULL, ","));

        count++;
    }

    return out;        
}