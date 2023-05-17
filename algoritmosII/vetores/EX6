#include <stdio.h> 
int main ( ) {
	int tam = 5;
	int v[tam], i, j, aux;
	
	for(i=0; i<tam; i++) {
		printf("informe um valor: ");
		scanf("%d", &v[i]);
	}
	
	printf("\nordem original: ");
	for(i=0; i<tam; i++) {
		printf("%d  ", v[i]);
	}
	
	for(i=0, j= tam-1; i < tam/2; i++, j--){
		aux = v[j];
		v[j] = v[i];
		v[i] = aux;
	}
	
	printf("\nordem contraria: ");
	for(i=0; i<tam; i++) {
		printf("%d  ", v[i]);
	}
	
	return 0;
}
