#include <stdio.h>

int main() {

  // El dato es una cadena de caracteres seguida de un carácter de espaciado
  // (se añade automáticamente el carácter nulo \0 al final)

  int entero;
  float flotante;

  printf("Ingresa el valor entero: ");
  scanf("%i", &entero);
  printf("El valor ingresado es: %d\n", entero);

  printf("Ingresa el valor float: ");
  scanf("%f", &flotante);
  printf("El valor ingresado es: %f\n", flotante);

  return 0;
}
