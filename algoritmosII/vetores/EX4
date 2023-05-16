#include <stdio.h>

int main (){
	int tam;
	printf("quantas casas tem no bairro?: ");
	scanf("%d", &tam);
	
	int v[tam], i, comando, casa, aluguel = 0;
	
	printf("\nse a casa estiver vazia, digite 0. \nse estiver ocupada, digite 1.\n\n");
	
	for(i = 0; i < tam; i++){
		printf("casa %d: ", i);
		scanf("%d", &v[i]);
	}
	
	printf("\nalugar casa: digite 1. \nliberar casa: digite 2. \nvalor ganho: digite 3. \ncasas livres: digite 4.\n");
	printf("\no que deseja?: ");
	scanf("%d", &comando);
	
	if(comando == 1) {
		printf("\nque casa deseja alugar?: ");
		scanf("%d", &casa);
		
		if(v[casa] == 0){
			v[casa] = 1;
			printf("\ncasa reservada com sucesso.\n\n");
			
			for(i = 0; i < tam; i++){
				printf("casa %d: %d\n", i, v[i]);
			}
			
		} else {
			printf("\na casa ja esta ocupada :(");
		}
		
	} else {
		if(comando == 2) {
			printf("\nque casa deseja liberar?: ");
			scanf("%d", &casa);
			
			if(v[casa] == 1) {
				v[casa] = 0;
				printf("\ncasa liberada com sucesso.\n\n");
				
				for(i = 0; i < tam; i++){
					printf("casa %d: %d\n", i, v[i]);
				}
				
			} else {
				printf("\na casa ja esta vazia :)");
			}
			
		} else {
			if(comando == 3) {
				for(i = 0; i < tam; i++){
					if(v[i] == 1) {
						aluguel ++;
					}
				}
				printf("\nvalor total a receber: R$ %d,00", aluguel * 500);
			} else {
				printf("\nid - casas livres: ");
				for(i = 0; i < tam; i++) {	
					if(v[i] == 0) {
						printf("%d ", i);
					}
				}
			}
		}
	}

	return 0;
}
