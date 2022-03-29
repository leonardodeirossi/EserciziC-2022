#include <stdio.h>

int main(void) {
  int numero;

  printf("Inserisci un numero: ");
  scanf("%d", &numero);

  if(numero > 100) {
    printf("\nIl numero e' maggiore di 100.");
  } else if (numero < 100) {
    printf("\nIl numero e' minore di 100.");
  } else {
    printf("\nIl numero e' uguale di 100.");
  }
  
  return 0;
}
