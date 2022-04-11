#include <stdio.h>
#include <string.h>
#include <conio.h> 
int main()
{
	char str1[100], str2[100], ch, temp;
	int i, j, len1, len2;

	printf("Inserisci la prima parola: ");
	gets(str1);
	printf("\n");
	printf("Inserisci la seconda parola: ");
	gets(str2);

	len1 = strlen(str1);
	len2 = strlen(str2); 

	if(len1 != len2){
		printf("0");
		exit(1);
	}

	for (i = 0; i < len1-1; i++) {
		for (j = i+1; j < len1; j++) {
			if (str1[i] > str1[j]) {
				temp  = str1[i];
				str1[i] = str1[j];
				str1[j] = temp;
			}
			
			if (str2[i] > str2[j]) {
				temp  = str2[i];
				str2[i] = str2[j];
				str2[j] = temp;
			}
		}
	}   

	for(i = 0; i<len1; i++) {
		if(str1[i] != str2[i]) {    
			printf("0");
			exit(1);
		}
	}    
	
	printf("1");
	return 0;
}
