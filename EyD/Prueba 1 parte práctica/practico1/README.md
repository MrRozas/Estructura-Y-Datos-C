# Práctico 1

Usted está encargado de organizar el campeonato mundial/universal de Pokemon del fin de los tiempos. Se espera que lleguen personas de todos los lugares del mundo y la galaxia (hasta Gokú vendrá...), por lo que no se deben dejar cabos sueltos.

Con el paso del tiempo las batallas se han puesto ultra tácticas, lo que ha impulsado al comité organizador a generar un software que ayude a los competidores en esta versión del campeonato. Este software debe ser capaz de ordenar según alguna métrica a los pokemones participantes.

Para tal efecto, se le ha pedido a usted como experto en estructura de datos y algoritmos la elaboración de este software. Para ello. se debe entregar la implementación de 5 funciones en 5 archivos separados .c.

El programa recibirá un csv con la información de los pokemon tal como se muestra a continuación:

ID,Name,Type 1,Type 2,Total,HP,Attack,Defense,Sp. Atk,Sp. Def,Speed,Generation,Legendary
1,Bulbasaur,Grass,Poison,318,45,49,49,65,65,45,1,False
2,Ivysaur,Grass,Poison,405,60,62,63,80,80,60,1,False

Esta información será guardada en el programa dentro de una estructura como se muestra a continuación.

```c
typedef struct n {
  int id;
  char nombre[80];  
  char tipo1[80];  
  char tipo2[80];
  int total;
  int hp;  
  int ataque;
  int defensa;
  int ataque_especial;
  int defensa_especial;
  int velocidad;
  int generacion;
  int legendario; //0: False 1:True
} pokemon;
```

## Funciones

Las funciones son las siguientes

| función                    | descripción                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| -------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ```swap```                 | Función que recibe como argumento dos estructuras de tipo pokemon. La función no retorna nada e intercambia el contenido de ambas estructuras.                                                                                                                                                                                                                                                                                                                                                                               |
| ```leer_archivo```         | Función que recibe como argumento el nombre de un archivo y un puntero a entero, y retorna un arreglo con todos los pokemones del archivo guardados en él. Además guarda en el puntero a entero la cantidad de pokemones leídos del archivo.                                                                                                                                                                                                                                                                                 |
| ```ordenar_pokemones```    | Recibe como argumento un arreglo de pokemones, y un entero que indica la cantidad de pokemones que tiene el arreglo. La función retornará UN NUEVO ARREGLO con los pokemones ordenados de mayor a menor (número más alto primero) según la columna total. En caso de empate, ordenar por nombres.                                                                                                                                                                                                                            |
| ```N_mejores```            | Recibe como argumento un arreglo de pokemones,  un entero que indica la cantidad de pokemones que tiene el arreglo, y otro entero que indica la cantidad de pokemones que serán ordenados. La función retornará UN NUEVO ARREGLO con los pokemones ordenados de mayor a menor (número más alto primero) según la columna total. En caso de empate, ordenar por nombres.                                                                                                                                                      |
| ```N_mejores_generacion``` | Recibe como argumento un arreglo de pokemones, un entero que indica la cantidad de pokemones que tiene el arreglo, otro entero que indica la cantidad de pokemones que serán ordenados, y un último entero que indica la generación que será usada para obtener los mejores pokemones. La función retornará UN NUEVO ARREGLO con los pokemones ordenados de mayor a menor (número más alto primero) según la columna total, conteniendo sólo los pokemones de la generación listada. En caso de empate, ordenar por nombres. |

## Consideraciones especiales

1. Sólo puede modificar los archivos **pregunta_X.c**. No puede modificar NADA MÁS.
2. Para facilitar su codificación se le entrega un Makefile que automatiza la compilación y ejecución de su código. Para ocuparlo debe hacer dos cosas:
   1. Modificar la línea 8 del archivo *utilities.h*, cambiando el número que aparece ahí por el número de la pregunta que desea compilar
   2. Escribir en la shell(consola-terminal) lo siguiente:

       ```bash
        make p1
       ```

       Este ejemplo es para compilar la pregunta 1. Si desea compilar la pregunta dos, en *utilities.h* edite el número mencionado anteriormente por un 2 y el make lo hace con p2
3. Sólo debe subir los archivos pregunta_X.c. SIN COMPRIMIR. No suba un zip, ni suba el main.c. Todo archivo extra subido a Webcursos será ignorado.
4. Nunca está demás decir que todos los códigos serán analizados con un detector de plagio. Esta evaluación se rige por la normas de conducta propias de un alumno UAI.
5. Para usar funciones creadas en otros archivos (por ejemplo quiere usar la función que creó en la pregunta_1 en la respuesta de la pregunta_2) debe copiar la implementación completa de la función en la pregunta que corresponde.