#include <stdio.h>
#include <stdbool.h>

int main() {
	int opzioneScelta;
	bool uscita;
	
	while(uscita == false) {
		printf("\n1) Somma due interi.");
		printf("\n2) Somma due float.");
		printf("\n3) Sottrai due interi.");
		printf("\n4) Dividi due float.");
		printf("\n5) Moltiplica due interi.");
		printf("\n6) Esci.");
		
		printf("\n\nInserisci l'operazione desiderata: ");
		scanf("%d", &opzioneScelta);
		
		switch(opzioneScelta) {
			case 1: ;
				int num1, num2, risSomma;
				
				printf("\nInserisci il primo numero: ");
				scanf("%d", &num1);
				
				printf("\nInserisci il secondo numero: ");
				scanf("%d", &num2);
				
				risSomma = somma(num1, num2);
				
				printf("La somma dei due numeri e': %d", somma);
				
			case 2: ;
				float realNum1, realNum2, realRisSomma;
				
				printf("\nInserisci il primo numero: ");
				scanf("%f", &realNum1);
				
				printf("\nInserisci il secondo numero: ");
				scanf("%f", &realNum2);
				
				realRisSomma = sommaReal(realNum1, realNum2);
				
				printf("La somma dei due numeri e': %f", realRisSomma);
				
			case 3: ;
				int sottrNum1, sottrNum2, risSottrazione;
				
				printf("\nInserisci il primo numero: ");
				scanf("%d", &sottrNum1);
				
				printf("\nInserisci il secondo numero: ");
				scanf("%d", &sottrNum2);
				
				risSottrazione = somma(sottrNum1, sottrNum2);
				
				printf("La somma dei due numeri e': %d", risSottrazione);
				
			case 4: ;
				float divNum1, divNum2, risDivisione;
				
				printf("\nInserisci il primo numero: ");
				scanf("%f", &divNum1);
				
				printf("\nInserisci il secondo numero: ");
				scanf("%f", &divNum2);
				
				risDivisione = divisione(divNum1, divNum2);
				
				printf("La somma dei due numeri e': %f", risDivisione);
				
			case 5: ;
				int mulNum1, mulNum2, risMoltiplicazione;
				
				printf("\nInserisci il primo numero: ");
				scanf("%d", &mulNum1);
				
				printf("\nInserisci il secondo numero: ");
				scanf("%d", &mulNum2);
				
				risMoltiplicazione = divisione(mulNum1, mulNum2);
				
				printf("La somma dei due numeri e': %d", risMoltiplicazione);
			case 6:
				uscita = true;
				break;
			default:
				break;
		}
	}
	
	return 0;
}

int somma(int a, int b) {
	return a + b;
}

float sommaReal(float a, float b) {
	return a + b;
}

int sottrazione(int a, int b) {
	return a - b;
}

float divisione(float a, float b) {
	return a / b;
}

int moltiplicazione(int a, int b) {
	return a * b;
}
