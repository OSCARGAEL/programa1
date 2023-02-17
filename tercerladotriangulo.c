#include <stdio.h>
#include <math.h>
int main () {
float lado1, lado2, angulo, lado3, rad;
printf ("Programa para calcular el tercer lado de un triangulo\n"
"conociendo 2 de sus lados y su angulo\n");
printf ("\nEscriba la medida del primer lado: ");
scanf ("%f", &lado1);
printf ("\nEscriba la medida del segundo lado: ");
scanf ("%f", &lado2);
printf ("\nEscriba la medida del angulo: ");
scanf ("%f", &angulo);
rad = angulo * 3.1416 / 180;
lado3 = (lado1 * lado1) + (lado2 * lado2) - (2 * lado1 * lado2 * cos
(rad));
lado3 = sqrt (lado3);
printf ("\nLa medida del tercer lado del triangulo es: %.2f", lado3);
return 0;
}
