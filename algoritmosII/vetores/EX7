#include <stdio.h>

int main ( ) {
	int tam1;
	printf("informe um valor: ");
	scanf("%d", &tam1);
	
	int tam2 = 2 * tam1;
	int v[tam1], x[tam1], f[tam2], i, c;
	
	for(i=0; i<tam1; i++) {
		printf("informe um valor [1]: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for(i=0; i<tam1; i++) {
		printf("informe um valor [2]: ");
		scanf("%d", &x[i]);
	}
	
	for(i=0, c=0; c < tam2; i++, c+= 2) {
		f[c] = v[i];
		f[c + 1] = x[i];
	}
	
	printf("\nvetor 3: ");
	for(c=0; c<tam2; c++) {
		printf("[%d] ", f[c]);
	}
	
	
	return 0;
}
