#include <stdio.h>

int main(){
	int tam = 15;
	int v[tam], i, c, comando;
	
	for(c=0; c<tam; c++){
		v[c]= 0;
	}
	printf("condição para plantio: estar entre duas casas sem arvore.\n\n");
	for(c=0; c<tam; c++) {
		printf("%d  ", v[c]);
	}
    
    printf("\n");
	while(comando != 2) {
		printf("\ndigite 1 para plantar uma arvore. \ndigite 2 para encerrar comandos. \n");
		printf("o que deseja?: ");
		scanf("%d", &comando);
		
		if(comando == 1) {
			printf("\ninforme o numero da casa: ");
			scanf("%d", &i);
			
			if(v[i-1] == 0 && v[i+1] == 0 && i != 0 && i != tam-1){
				v[i] = 1;
				printf("\nplantio autorizado!\n");
			} else {
				printf("\nplantio nao autorizado!\n");
			}
				
			for(c=0; c<tam; c++) {
			printf("%d  ", v[c]);
			}
			
			printf("\n");
		}
	}
	
	if(comando == 2) {
		printf("\ncomando encerrado.\n");
	}
	
	return 0;
}
