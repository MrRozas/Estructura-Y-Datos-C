#include "pregunta_2.h"

/**
 * @brief Inserta un nuevo investigador en el árbol de jerarquía creado. Este
 * nuevo investigador será creado acá, y si quiere puede usar la función creada en la
 * pregunta 1. Para hacerlo se debe copiar y pegar esa función en este archivo
 * .c, antes de la función insertar_investigador. El nuevo investigador será
 * insertado en el arreglo "discipulos" del investigador maestro. Si ID_maestro 
 * es -1, entonces el nuevo investigador será el nodo raiz del árbol jerárquico.
 * En este caso, asuma que el árbol está vacío (no es
 * necesario hacer validaciones)
 *
 * HINT: para agrandar el arreglo de discipulos, puede usar la función realloc:
 *
 * discipulos = (tipo)realloc(discipulos, nuevo_tamaño)
 *
 * https://www.tutorialspoint.com/c_standard_library/c_function_realloc.htm
 *
 * @param raiz Nodo raiz del árbol jerárquico
 * @param ID ID del nuevo investigador.
 * @param nombre nombre del nuevo investigador
 * @param ID_maestro maestro del nuevo investigador (si es -1 el nuevo investigador es raiz)
 * @return investigador* Nueva raiz del árbol jerárquico
 */

investigador* insertar_investigador(investigador* raiz, int ID, char* nombre,
                                    int ID_maestro) {
  return NULL;
}