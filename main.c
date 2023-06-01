#include <stdio.h>
#include "alumnos.h"
int main() {
FILE *fp;
// Abrir el archivo para escritura en modo binario
fp = fopen("registros.dat", "ab");
if (fp == NULL) {
printf("Error al abrir el archivo.");
return 1;
}
// Capturar datos de los alumnos hasta que se ingrese una
matrícula en blanco
capturarDatosDeAlumnos(fp);
// Cerrar el archivo
fclose(fp);
// Abrir el archivo para lectura en modo binario
fp = fopen("registros.dat", "rb");
if (fp == NULL) {
printf("Error al abrir el archivo.");
return 1;
}
// Desplegar los datos de los alumnos almacenados en el archivo
desplegarDatosDeAlumnos(fp);
// Cerrar el archivo
fclose(fp);
return 0;
}
