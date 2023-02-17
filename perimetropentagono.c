#include <stdio.h>
int main () {
float lado, perimetro;
printf ("Programa para calcular el perimetro de un pentagono\n"
"conociendo uno de sus lados\n");
printf ("\nEscriba la medida de un lado del pentagono: ");
scanf ("%f", &lado);
perimetro = lado * 5;
printf ("\nEl perimetro del pentagono es: %.2f", perimetro);
return 0;
}
