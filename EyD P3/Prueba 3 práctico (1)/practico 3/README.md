# Práctico 3

En la antigua grecia los investigadores connotados tenían escuelas, donde los maestros enseñaban a sus discipulos. ASí un Maestro podía tener un número variable de discipulos, y a su vez, estos discipulos podían tener otro número variable de discipulos (ya sabemos para donde va esto...)

Se le pide a usted como experto en estructura de datos que genere esta estructura tipo árbol, para ordenar los maestros (investigadores) y discípulos que vayan apareciendo.

La estructura para esto es la siguiente

```C
typedef struct n {
  int ID;
  char nombre[80];
  struct n **discipulos;
  int numero_discipulos;
} investigador;
```

Donde:

* ID: Identificador único de cada investigador (sea maestro o discípulo)
* nombre: Nombre del investigador
* discipulos: Arreglo de punteros a una cantidad variable de discipulos.
* numero_discipulos: Cantidad de discipulos que tiene el investigador al que representa esta variable.



## Funciones

Las funciones son las siguientes

| función                                                                                     | descripción                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| ------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ```investigador* crear_investigador(int ID, char* nombre)```                                | recibe dos argumentos: ID, que corresponde al ID que tendrá este investigador (no deben preocuparse de que sea único), y el nombre de este investigador. La función retorna el investigador.                                                                                                                                                                                                                                                                         |
| ```investigador* insertar_investigador(investigador* raiz, int ID, char* nombre, int ID_maestro)``` | Función que recibe cuatro argumentos: la raiz del árbol de jerarquía, El ID del investigador, el nombre del investigador, y el ID_maestro que corresponde al id del maestro de este nuevo investigador. La función debe crear un nodo en el árbol e insertarlo en los discipulos del nodo que corresponde al investigador maestro. Si el investigador maestro no existe, entonces la función no hace nada (no se inserta el nuevo nodo). Si el ID_maestro es -1 entonces se inserta el nuevo investigador como raiz del arbol (se asume en ese caso que el árbol es vacío). La función retorna la nueva raíz del árbol.
| ```int cantidad_discipulos(investigador* raiz, int ID)```                                   | Función que recibe como argumento la raiz del árbol y el ID del investigador sobre el cual se contará la cantidad de estudiantes que tiene. La función retorna un entero con el número de estudiantes que tiene el investigador identificado con el número ID. Si el investigador no existe (ID no encontrado), entonces se debe retornar -1.                                                                                                                        |
| ```investigador* investigador_con_mas_discipulos(investigador* raiz)```                     | Función que recibe como argumento la raiz del árbol. La función retorna el investigador que tiene más discipulos. En caso de empate, se debe retornar el investigador que se encuentre más alto en la jerarquía (el maestro del maestro del maestro...)                                                                                                                                                                                                              |
| ```int cantidad_de_investigadores_sin_discipulos(investigador* raiz)```                     | Función que recibe como argumento la raiz del árbol. La función retorna la cantidad de investigadores que no tienen discipulos.                                                                                                                                                                                                                                                                                                                                      |

## Consideraciones especiales

1. Sólo puede modificar los archivos **pregunta_X.c**. No puede modificar NADA MÁS.
2. Para facilitar su codificación se le entrega un Makefile que automatiza la compilación y ejecución de su código. Para ocuparlo debe hacer dos cosas:
   1. Modificar la línea 8 del archivo *p1_utilities.h*, cambiando el número que aparece ahí por el número de la pregunta que desea compilar
   2. Escribir en la shell(consola-terminal) lo siguiente:

       ```bash
        make p1
       ```

       Este ejemplo es para compilar la pregunta 1. Si desea compilar la pregunta dos, en p1_utilities.h edita el número mencionado anteriormente por un 2 y el make lo hace con p2
3. Sólo debe subir los archivos pregunta_X.c. SIN COMPRIMIR. No suba un zip, ni suba el main.c. Todo archivo extra subido a Webcursos será ignorado.
4. Nunca está demás decir que todos los códigos serán analizados con un detector de plagio. Esta evaluación se rige por la normas de conducta propias de un alumno UAI.
