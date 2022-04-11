#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	float delta, x1, x2;
	
	printf("Inserisci il valore di a: ");
	scanf("%d", &a);
	printf("Inserisci il valore di b: ");
	scanf("%d", &b);
	printf("Inserisci il valore di c: ");
	scanf("%d", &c);
	
	delta = pow(b, 2) - (4 * a * c);
	
	if(delta < 0) {
		printf("nessuna soluzione reale");
	} else if(delta == 0) {
		x1 = (-b + radq(delta));
		
		printf("Il risultato e': %f", x1);
	} else {
		x1 = (-b + radq(delta));
		x2 = (-b - radq(delta));
		
		printf("Il risultato n. 1 e': %f", x1);
		printf("Il risultato n. 2 e': %f", x2);
	}
	
	return 0;
}
