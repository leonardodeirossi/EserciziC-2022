#include <stdio.h>

int main() {
	int arrayVoti[6];
	int i, maggiore, minore, somma;
	float media;
	
	for(i = 0; i < 6; i++) {
		printf("\nInserisci il voto del %d studente: ", i + 1);
		scanf("%d", &arrayVoti[i]);
	}
	
	maggiore = 0;
	for(i = 0; i < 6; i++) {
		if(arrayVoti[i] > maggiore) {
			maggiore = arrayVoti[i];
		}
	}
	
	minore = 10; // Voto max. perché non ce ne sono < 0.
	for(i = 0; i < 6; i++) {
		if(arrayVoti[i] < minore) {
			minore = arrayVoti[i];
		}
	}
	
	somma = 0;
	for(i = 0; i < 6; i++) {
		somma = somma + arrayVoti[i];
	}
	
	media = somma / 6;
	
	printf("\n Il voto maggiore e': %d", maggiore);
	printf("\n Il voto minore e': %d", minore);
	printf("\n La media e': %f", media);
	
	return 0;
}
