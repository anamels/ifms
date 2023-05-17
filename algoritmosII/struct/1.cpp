#include <stdio.h> 
int main ( ) {
	
	struct dados {
		double litroleite, alimento, peso;
		int nasc, abate = 0;
	};
	
	int tam = 2, comando = 0, i, maior = 0, indM;
	struct dados gado[tam];
	
	printf("cadastro de animais. \n\n");
	for(i=0; i<tam; i++) {
		printf("gado %d \n", i);
		
		printf("informe a media de leite por dia: ");
		scanf("%lf", &gado[i].litroleite);
		
		printf("informe a media de alimento que consome: ");
		scanf("%lf", &gado[i].alimento);
		
		printf("informe o peso do animal: ");
		scanf("%lf", &gado[i].peso);
		
		printf("informe o ano de nasc do animal: ");
		scanf("%d", &gado[i].nasc);
		
		printf("\n");
	}
	
	while(comando != 5) {
		printf("comandos:\n");
		printf("1. impressao de dados.\n");
		printf("2. atualizar peso e racao.\n");
		printf("3. busca maior peso.\n");
		printf("4. producao total.\n");
		printf("5. encerrar programa.\n");
		printf("\no que deseja?: ");
		scanf("%d", &comando);
		printf("\n");
		
		if(comando==1){
			for(i=0; i<tam; i++){
				printf("gado numero %d: \n\n", i);
				printf("L leite por dia: %.2lf\n", gado[i].litroleite);
				printf("kg alimento consumido: %.2lf\n", gado[i].alimento);
				printf("peso do animal: %.2lf\n", gado[i].peso);
				printf("ano de nascimento: %d\n", gado[i].nasc);
				printf("\n");
			}
		}
		
		if(comando==2){
			double novopeso, novoali;
			printf("informe o codigo no animal: ");
			scanf("%d", &i);
			printf("informe o novo peso: ");
			scanf("%.2lf", &novopeso);
			printf("informe nova quantia de alimento: ");
			scanf("%.2lf", &novoali);
			
			gado[i].peso = novopeso;
			gado[i].alimento = novoali;
		
			printf("peso do animal: %.2lf\n", gado[i].peso);
			printf("alimento consumido: %.2lf\n", gado[i].alimento);
		}
		
		if(comando==3){
			for(i=0; i<tam; i++){
				if(gado[i].peso > maior) {
					maior = gado[i].peso;
					indM = i;
				}
			}
			printf("gado de maior peso: %d\n", indM);
			printf("L leite por dia: %.2lf\n", gado[indM].litroleite);
			printf("kg alimento consumido: %.2lf\n", gado[indM].alimento);
			printf("peso do animal: %.2lf\n", gado[indM].peso);
			printf("ano de nascimento: %d\n", gado[indM].nasc);
			printf("\n");
		}
		
		if(comando==4){
            int leiteT = 0;
			for(i=0; i<tam; i++){
			    leiteT = leiteT + gado[i].litroleite;
			}
			printf("total de leite produzido: %.2lf litros.\n\n", leiteT);
		}
		
		if(comando==5){
			for(i=0; i<tam; i++){
				if(2020 - gado[i].nasc > 9 || gado[i].litroleite < 20){
					gado[i].abate = 1;
				}
			}
		}
	}
	
	return 0;
}
