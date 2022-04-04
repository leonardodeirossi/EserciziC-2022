#include <stdio.h>

int main(void) {
  int nValori, i, j, temp;

  printf("Inserisci il numero di partecipanti:  ");
  scanf("%d", &nValori);
  
  int punteggi1[nValori];
  int punteggi2[nValori];
  int somma[nValori];
  int copia[nValori];

  //input array 1
  printf("Inserimento primi punteggi\n");
  for (i=0; i<nValori; i++){
    printf("Inserici il punteggio: ");
    scanf("%d", &temp);
    punteggi1[i] = temp;
  }

  //input array 2
  printf("Inserimento secondi punteggi\n");
  for (i=0; i<nValori; i++){
    printf("Inserici il punteggio: ");
    scanf("%d", &temp);
    punteggi2[i] = temp;
  }

  //vettore somma
  for (i=0; i<nValori; i++){
    somma[i] = punteggi1[i] + punteggi2[i];
    copia[i] = somma[i];
  }

  //bubble sort (ordina in modo crescente)
  for (i = 0; i < nValori - 1; i++){
      for (j = 0; j < nValori - i - 1; j++) {
          if (copia[j] > copia[j + 1]) {
              temp = copia[j];
              copia[j] = copia[j + 1];
              copia[j + 1] = temp;
          }
      }
  }

  //inveriti (odine decrescente)
  i = 0;
  j = nValori - 1;
  
  while(i < (nValori/2)){
    temp = copia[i];
    copia[i] = copia[j];
    copia[j] = temp;

    i = i + 1;
    j = j - 1;
  }

  //classifica
  for (i=0; i<nValori; i++){
    j = 0;
    while (copia[i] != somma[j]){
      j = j + 1;
    }
    printf("Al %d° posto c'è il %d partecipante\n", i+1, j+1);
  }
  
  return 0;
}
