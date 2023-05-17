#include <stdio.h> 
int main ( ) {
	
	int tam=3, tam2=3, soma=0;
	int m[tam][tam2], l, c, comando, bloco, ap, amais;
	
	printf("insira a quantidade de pessoa em cada apartamento: \n");
	for (l=0; l<tam; l++) {
		for(c=0; c<tam2; c++){
			printf("b[%d]ap[%d]: ", l, c);
			scanf("%d", &m[l][c]);
		}
		printf("\n");
	}
	
	for (l=0; l<tam; l++) {
		for(c=0; c<tam2; c++){
			printf("%d  ", m[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("MENU DE COMANDOS\n");
	printf("1 para total de pessoas em um bloco.\n");
	printf("2 para atualizar moradores em um ap.\n");
	printf("3 para bloco com maior quantidade de pessoas.\n");
	printf("4 para verificar taxa extra.\n");
	printf("5 para encerrar programa.\n");
	printf("\no que deseja?:");
	scanf ("%d", &comando);
	
	while(comando != 5) {
		if(comando == 1) {
			printf("informe o numero do bloco: ");
			scanf("%d", &bloco);
			for(c=0; c<tam2; c++) {
				soma = soma + m[bloco][c];
			}
			printf("\n%d pessoas no bloco.\n\n", soma);
		}
		if(comando == 2) {
			printf("informe o bloco: ");
			scanf("%d", &bloco);
			printf("informe o ap: ");
			scanf("%d", &ap);
			printf("informe a quantidade de moradores: ");
			scanf("%d", &amais);
			
			m[bloco][ap] = m[bloco][ap] + amais;
		}
	}
	
	for (l=0; l<tam; l++) {
		for(c=0; c<tam2; c++){
			printf("b[%d]ap[%d]  ", l, c);
		}
		printf("\n");
	}
	
	return 0;
}
