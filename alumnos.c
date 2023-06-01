#include <stdio.h>
#include <string.h>
#include "alumnos.h"
void capturarDatosDeAlumnos(FILE *fp) {
struct alumno a;
while (1) {
// Pedir al usuario que ingrese los datos del alumno
printf("Ingrese la matricula del alumno (deje en blanco para

terminar): ");

if (scanf("%d", &a.matricula) != 1) {
break;
}

printf("Ingrese el nombre del alumno: ");
scanf("%s", a.nombre);
printf("Ingrese la direccion del alumno: ");
scanf("%s", a.direccion);
// Escribir la estructura de datos en el archivo
fwrite(&a, sizeof(struct alumno), 1, fp);
}
}
void desplegarDatosDeAlumnos(FILE *fp) {
struct alumno a;
while (fread(&a, sizeof(struct alumno), 1, fp) == 1) {
// Imprimir los datos del alumno en la consola
printf("Matricula: %d\n", a.matricula);
printf("Nombre: %s\n", a.nombre);
printf("Direccion: %s\n", a.direccion);
printf("\n");
}
}
