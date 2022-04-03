#include <stdio.h>

int main() {
	int numeroValori, totalePari, totaleDispari;
	
	printf("Inserisci il numero di valori da inserire: ");
	scanf("%d", &numeroValori);
	
	int array[numeroValori];
	int i;
	
	for(i = 0; i < numeroValori; i++) {
		printf("\nInserisci il valore da inserire: ");
		scanf("%d", &array[numeroValori]);
	}
	
	totalePari = 0;
	totaleDispari = 0;
	
	for(i = 0; i < numeroValori; i++) {
		if(array[i] % 2 == 0) {
			totalePari = totalePari + 1;
		} else {
			totaleDispari = totaleDispari + 1;
		}
	}
	
	printf("\nI numeri pari sono %d.", totalePari);
	printf("\nI numeri dispari sono %d.", totaleDispari);
	
	return 0;
}
