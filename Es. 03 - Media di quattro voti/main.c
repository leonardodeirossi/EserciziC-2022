#include <stdio.h>

int main(void) {
  float voti[4];
  float votoTmp, media;
  float sommaVoti = 0;
  int i = 0;
  int j = 0;

  while(i < 4) {
    printf("\nInserisci il voto: ");
    scanf("%f", &votoTmp);

    if(votoTmp < 0 || votoTmp > 10) {
      printf("\nAttenzione! Inserisci un voto valido.");

      printf("\nInserisci il voto: ");
    scanf("%f", &votoTmp);
    } else {
      i = i + 1;
    }
  }

  for(j = 0; j < 4; j++) {
    sommaVoti = sommaVoti + voti[i];
  }

  media = sommaVoti / 4;

  printf("\nLa media dei voti e': %f", media);
  
  return 0;
}
