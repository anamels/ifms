#include <stdio.h>

int main(){
	int tam, t = 0, i, j, aux = 0;
	
	printf("qtd caracteres: ");
	scanf("%d", &tam);
	char c[tam+1];
	
	printf("informe a string: ");
	scanf("%s", c);
	
	for(i=0, j=tam-1; i< tam/2 && aux == 0; i++, j--) {
		if(c[i] != c[j]) {
			printf("nao eh palindromo.");
			aux = 1;
		}
	}
	
	if(aux == 0) {
		printf("palindromo.");
	}
	
	return 0;
}
