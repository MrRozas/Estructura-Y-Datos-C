#include "pregunta_1.h"

/**
 * @brief Función encargada de crear un investigador. Esta función debe pedir la
 * memoria y retornar un investigador sin discipulos
 *
 * @param ID ID del nuevo investigador que se generará
 * @param nombre Nombre que tendrá este nuevo investigador.
 * @return investigador* Retorna un puntero al nuevo investigador
 */

investigador* crear_investigador(int ID, char* nombre) {

investigador *tp = (investigador *) malloc(sizeof(investigador));;
tp->ID = ID;
strcpy(tp->nombre, nombre);
return tp; 
}