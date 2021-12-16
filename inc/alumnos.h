/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

/** @author Héctor Ramón RIZO*/


#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Función del tipo booleana, dedicada a la carga de los parámetros, documetnos, apellidos y nombres
 * 
 * @param cadena es una variable tipo char 
 * @param espacio es una variable tipo site_t
 * @param alumno se carga laestructura alumno_t
 * @return true = puede devolver un verdadero
 * @return false = puede devolder un falso
 */


bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);


/**
 * @brief la función erializacionAlumnos es del tipo booleana en donde se regista la cantidad de alumnos agregados a la base de datos
 * 
 * @param cadena 
 * @param espacio 
 * @return true 
 * @return false 
 */

bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
