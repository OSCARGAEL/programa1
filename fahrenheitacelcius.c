#include <stdio.h>
int main () {
float fahrenheit, centigrados;
printf ("Escriba los grados fahrenheit a convertir en grados centigrados:");
scanf ("%f", &fahrenheit);
centigrados = (fahrenheit - 32) / 1.8;
printf ("\n%.2f grados fahrenheit son %.2f grados centigrados", fahrenheit,
centigrados);
return 0;
}
