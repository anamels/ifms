#include <stdio.h>

int main ( ) {
	
	int tam;
	printf("quantas pessoas irao participar?: ");
	scanf("%d", &tam);
	int v[tam], i, n;
	
	for(i = 0; i<tam; i++){
		printf("informe o numero: ");
		scanf("%d", &v[i]);
		printf("codigo do participante: %d\n\n", i);
	}
	
	printf("informe o numero sorteado: ");
	scanf("%d", &n);
	
	printf("\ncodigo do(s) ganhador(es): ");
	for(i=0; i<tam; i++) {
		if(v[i] == n){
			printf("%d  ", i);
		}
	}
	
	return 0;
}
