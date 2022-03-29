#include <stdio.h>
#include <math.h>

int main(void) {
  int base, esponente, potenza;

  printf("Inserisci la base: ");
  scanf("%d", &base);

  printf("\nInserisci l'esponente: ");
  scanf("%d", &esponente);

  potenza = pow(base, esponente);

  printf("\nLa potenza è': %d", potenza);
  return 0;
}
