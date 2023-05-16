#include <stdio.h>

int main ( ) {
	int taml = 3, tamc = 3, soma = 0;
	int m[taml][tamc], l, c;
	
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
	
	for(l=0, c=0; l < taml; l++, c++) {
			soma = soma + m[l][c];
	}
	
	printf("\nsoma da diagonal:%d", soma);
	
	return 0;
}
