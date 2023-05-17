#include <stdio.h>

int main(){
	
	struct dogdados {
		double peso;
		char nome[30];
		int idade;
		int desfile;
	};
	
	int tam = 2, i, comando = 0, maioridade = 0, maisvelho;
	
	struct dogdados dog[tam];
	
	//cadastro
	
	printf("cadastro de animais:\n");
	for(i=0; i<tam; i++) {
		printf("\nanimalzinho numero %d\n", i);
		printf("\ninforme o nome do animal: ");
		scanf("%s", dog[i].nome);
		printf("informe a idade do animal: ");
		scanf("%d", &dog[i].idade);
		printf("informe o peso do animal: ");
		scanf("%lf", &dog[i].peso);
		dog[i].desfile = 0;
	}
	
	//menu
	
	while(comando != 4){
		printf("\n\nescolha uma opcao: ");
		printf("\n1. exibir dados.");
		printf("\n2. substituir animais.");
		printf("\n3. premiar cao idosinho s2.");
		printf("\no que deseja?: ");
		scanf("%d", &comando);
		
		if(comando == 1){
			for(i=0; i<tam; i++){
				printf("\n\nanimalzinho numero %d\n", i);
				printf("\nnome: %s", dog[i].nome);
				printf("\nidade: %d ano(s)", dog[i].idade);
				printf("\npeso: %.2lfkg", dog[i].peso);
				if(dog[i].desfile == 0){
					printf("\nnao desfilou");
				} else {
					printf("\nja desfilou");
				}
			}
		}
		
		if(comando == 2){
			printf("\ncodigo do animal: ");
			scanf("%d", &i);
			printf("\ninforme o nome do animal: ");
			scanf("%s", dog[i].nome);
			printf("informe a idade do animal: ");
			scanf("%d", &dog[i].idade);
			printf("informe o peso do animal: ");
			scanf("%lf", &dog[i].peso);
			dog[i].desfile = 0;
		}
		
		if(comando == 3){
			for(i=0; i<tam; i++){
				if(dog[i].idade > maioridade && dog[i].desfile == 0){
					maisvelho = i;
					maioridade = dog[i].idade;
				}
			}
			printf("\nnumero do dog premiado: %d", maisvelho);
			printf("\nnome: %s", dog[maisvelho].nome);
			printf("\nidade: %d ano(s)", dog[maisvelho].idade);
			printf("\npeso: %.2lfkg", dog[maisvelho].peso);
		}
	}
	
	return 0;
}
