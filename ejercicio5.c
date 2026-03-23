#include <stdio.h>

int main()
{
    int enteroNumero;
    char caracterA = 65; // Convierte el entero a carácter ASCII.
    double puntoFlotanteNumero;

    // Asignar valor de teclado a una variable.
    printf("Escriba un valor entero: ");
    scanf("%i", &enteroNumero);

    printf("Escriba un valor real: ");
    scanf("%lf", &puntoFlotanteNumero);

    // Imprimir valores con formato.
    printf("\nImprimiendo las variables \a\n");

    printf("\tValor de enteroNumero = %i \a\n", enteroNumero);
    printf("\tValor de caracterA = %c \a\n", caracterA);
    printf("\tValor de puntoFlotanteNumero = %lf \a\n", puntoFlotanteNumero);

    printf("\tValor de enteroNumero en base 16 = %x \a\n", enteroNumero);
    printf("\tValor de caracterA en código hexadecimal = %x\n", caracterA);

    printf("\tValor de puntoFlotanteNumero\n");
    printf("en notación científica = %e\n", puntoFlotanteNumero);

    return 0;
}
