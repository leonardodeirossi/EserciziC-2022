#include <stdio.h>

int main() {
	int numeroValori, i, j, numeroTemp;
	
	printf("Inserisci il numero di valori: ");
	scanf("%d", &numeroValori);
	
	int valori[numeroValori];
	
	for(i = 0; i < numeroValori; i++) {
		printf("Inserisci il valore: ");
		scanf("%d", &valori[i]);	
	}
	
	for(i = 0; i < numeroValori; i++) 
    {
        for (j = i + 1; j < numeroValori; j++)
        {
            if (valori[i] > valori[j]) 
            {
                numeroTemp =  valori[i];
                valori[i] = valori[j];
                valori[j] = numeroTemp;
            }
        }
    }
        
        
    for(i = 0; i < numeroValori; i++) {
		printf("\n%d", valori[i]);	
	}
	
	return 0;
}
