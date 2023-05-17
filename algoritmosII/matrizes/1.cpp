#include <stdio.h>
int main ( ) {
	
	int taml, tamc;
	printf("qtd linhas: ");
	scanf("%d", &taml);
	printf("qtd colunas: ");
	scanf("%d", &tamc);
	
	int m[taml][tamc], l, c, soma = 0;
	
	for(l=0; l<taml; l++) {
		for(c=0; c<tamc; c++) {
			printf("informe um valor [%d][%d]: ", l, c);
			scanf("%d", &m[l][c]);
		}
	}
	
	for(l=0; l<taml; l++) {
	  printf("\n");
		for(c=0; c<tamc; c++) {
			printf("%d ", m[l][c]);
		}
	}	
	
	for(l=0; l<taml; l++) {
		for(c=0; c<tamc; c++) {
			soma = soma + m[l][c];
		}
	}
	
	printf("\n\nsoma: %d", soma);
		
	return 0;
}
