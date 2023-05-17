#include <stdio.h>
int main ( ) {
	
	int tam = 10, i = 0, a = 0;
	char senha[tam+1];
	
	printf("insira uma senha (max. 10 letras): ");
	scanf("%s", senha);
	
	while(senha[i] != '\0') {
		if(senha[i] == 'a') {
			a++;
		}
		i++;
	}
	
	if(a >= 3) {
		printf("senha valida!\n");
	} else {
		printf("senha invalida!");
	}
	
	return 0;
}
