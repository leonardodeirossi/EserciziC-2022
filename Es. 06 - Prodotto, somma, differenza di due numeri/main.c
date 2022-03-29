#include <stdio.h>

int main(void) {
  int num1, num2;
  float risultato;

  printf("\nInserisci il primo numero: ");
  scanf("%d", &num1);
  
  printf("\nInserisci il secondo numero: ");
  scanf("%d", &num2);

  if(num1 % 2 == 0 && num2 % 2 == 0) {
    risultato = num1 * num2;
  } else if ((num1 % 2 == 0 && num2 % 2 != 0) || (num1 % 2 != 0 && num2 % 2 == 0)) {
    risultato = num1 + num2;
  } else {
    risultato = num1 / num2;
  }

  printf("Il risultato e': %f", risultato);
  
  return 0;
}
