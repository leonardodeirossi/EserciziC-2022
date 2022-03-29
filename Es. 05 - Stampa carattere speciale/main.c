#include <stdio.h>

int main(void) {
  int numero;

  printf("Inserisci un numero: ");
  scanf("%d", &numero);

  if(numero > 0) {
    printf("\"\"\"\"\"\"");
  } else if (numero < 0) {
    printf("\\\\\\\\\\\\");
  } else {
    printf("\%\%\%\%\%\%");
  }
  
  return 0;
}
