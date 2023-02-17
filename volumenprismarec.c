#include <stdio.h>
int main () {
float base, altura, lado, volumen;
printf ("Programa para calcular el volumen de prisma un rectangular\n"
"conociendo todos sus lados\n");
printf ("\nEscriba la medida de la base del prisma rectangular");
scanf ("%f", &base);
printf ("\nEscriba la medida de la altura del prisma rectangular");
scanf ("%f", &altura);
printf ("\nEscriba la medida de un lado del prisma rectangular");
scanf ("%f", &lado);
volumen = base * altura * lado;
printf ("\nEl volumen del prisma rectangular es: %.2f", volumen);
return 0;
}
