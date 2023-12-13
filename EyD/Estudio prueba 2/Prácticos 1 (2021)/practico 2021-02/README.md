# Práctico 1 

Lo acaban de incorporar al equipo del mundo mundial de estadísticas covid, y su primer caso es ordenar los casos acumulados contenidos dentro de un archivo csv, pero no en python ni usando pandas :P, sino que C :)

Para ello, debe realizar un total de 5 funciones, cada una separada en su propio *header file* y *C file*.
## Archivo CSV

El archivo csv contiene un total de 7 columnas que se describen a continuación:

| Campo               | Detalle                                    |
| ------------------- | ------------------------------------------ |
| Date                | Fecha en la que se hizo la medición        |
| iso3                | Código de abreviación del nombre del país  |
| CountryName         | Nombre del país                            |
| Region              | Región del país donde se tomaron los datos |
| CumulativePositive  | Acumulativo de los nuevos positivos        |
| CumulativeDeceased  | Acumulativo de los fallecidos              |
| CumulativeRecovered | Acumulativo de los recuperados             |

## Funciones

Las funciones son las siguientes

| función                                                                                                               | descripción                                                                                                                                                                                                                                                                                                |
| --------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ```region* read_regions(char* filename, int* number_of_registers)```                                                  | Función encargada de leer el archivo csv que contiene la data. Debe retornar un arreglo de regiones, cuya estructura está definida en p1_utilities.h. Además debe asignar valor a la variable number_of_register con la cantidad de registros contenidos en el csv                                         |
| ```country* create_countries_by_date(region* regions, int number_registers,int* number_country_registers)```          | Esta función recibe como parámetro de entrada el arreglo con todas las regiones, y genera un arreglo de países (ver estructura en p1_utilities.h) con las regiones colapsadas por fecha y país.                                                                                                            |
| ```void swap(country* c1, country* c2)```                                                                             | Función que intercambia los valores de dos países                                                                                                                                                                                                                                                          |
| ```country* sort_last_day(country* countries, int number_country_registers,int* number_country_registers_last_day)``` | Función que retorna un arreglo con todos los países que se encuentran en el último día del csv ordenado por cantidad de casos activos, donde el que tiene más casos activos acumulados se encuentra en el primer índice, y el que tiene menos se encuentra en el último.                                   |
| ```void sort_countries(country* countries, int number_country_registers)```                                           | Función que ordena por cantidad de casos activosun arreglo de países, donde el que tiene más casos activos acumulados se encuentra en el primer índice, y el que tiene menos se encuentra en el último. Este sort no agrupa por fecha, por lo que habrán valores repetidos de país para diferentes fechas. |

## Consideraciones especiales

1. Sólo puede modificar los archivos **pregunta_X.c**. No puede modificar NADA MÁS (a excepción de un archivo del que se habla en el punto 2).
2. Para facilitar su codificación se le entrega un Makefile que automatiza la compilación y ejecución de su código. Para ocuparlo debe hacer dos cosas:
   1.  Modificar la línea 8 del archivo *p1_utilities.h*, cambiando el número que aparece ahí por el número de la pregunta que desea compilar
   2.  Escribir en la shell(consola-terminal) lo siguiente:
       ```bash
        make p1
       ```
       Este ejemplo es para compilar la pregunta 1. Si desea compilar la pregunta dos, en p1_utilities.h edita el número mencionado anteriormente por un 2 y el make lo hace con p2
3. Sólo debe subir los archivos pregunta_X.c. SIN COMPRIMIR. No suba un zip, ni suba el main.c. Todo archivo extra subido a Webcursos será ignorado.
4. Nunca está demás decir que todos los códigos serán analizados con un detector de plagio. Esta evaluación se rige por la normas de conducta propias de un alumno UAI. 