#include <stdio.h> 
int main ( ) {
	
	int tam = 20, i = 0;
	char senha[tam+1];
	
	printf("insira uma senha (max. 20 letras): ");
	scanf("%s", senha);
	
	while(senha[i] != '\0') {
		i++;
	}
	
	if(i < 8){
		printf("senha invalida: apenas %d digitos.\n", i);
	} else {
		printf("senha valida!");
	}
	
	return 0;
}
