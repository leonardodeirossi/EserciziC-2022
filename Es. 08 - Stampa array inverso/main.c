#include <stdio.h>

int main() {
	int numeroValori, i;
	
	printf("Inserisci il numero di valori da inserire: ");
	scanf("%d", &numeroValori);
	
	int array[numeroValori];
	
	for(i = 0; i < numeroValori; i++) {
		printf("\nInserisci il valore da inserire: ");
		scanf("%d", &array[i]);
	}
	
	for(i = numeroValori - 1; i >= 0; i--) {
		printf("\n%d", array[i]);
	}
	
	return 0;
}
