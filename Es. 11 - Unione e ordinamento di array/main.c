#include <stdio.h>

int main() {
	int array1[10], array2[10], array3[20], i, j, numeroTemp;
	
	for(i = 0; i < 10; i++) {
		printf("\nInserisci il valore (primo array): ");
		scanf("%d", &array1[i]);
	}
	
	for(i = 0; i < 10; i++) {
		printf("\nInserisci il valore (secondo array): ");
		scanf("%d", &array2[i]);
	}
	
	for(i = 0; i < 10; i++) {
		array3[i] = array1[i];
	}
	
	for(i = 0; i < 10; i++) {
		array3[i + 10] = array2[i];
	}
	
	for(i = 0; i < 20; i++) 
    {
        for (j = i + 1; j < 20; j++)
        {
            if (array3[i] > array3[j]) 
            {
                numeroTemp = array3[i];
                array3[i] = array3[j];
                array3[j] = numeroTemp;
            }
        }
    }
    
    for(i = 0; i < 20; i++) {
		printf("\n%d", array3[i]);	
	}
	
	return 0;
}
