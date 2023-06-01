#ifndef ALUMNOS_H
#define ALUMNOS_H
#include <stdio.h>
struct alumno {
int matricula;
char nombre[50];
char direccion[50];
};
void capturarDatosDeAlumnos(FILE *fp);
void desplegarDatosDeAlumnos(FILE *fp);
#endif
