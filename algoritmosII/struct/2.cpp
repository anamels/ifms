#include <stdio.h>
int main(){
	
	struct dogdados {
		double peso;
		char nome[30];
		int idade;
		int desfile;
		int pontos;
	};
	
	struct substituidos {
		int vazio;
		double peso;
		char nome[30];
		int idade;
		int desfile;
		int pontos;
	};
	
	int tam;
	printf("qtd de animaizinhos: ");
	scanf("%d", &tam);
	
	int tam2 = 5, comando = 0, maioridade = 0, naodesf = 0;
	int i, j, x, maisvelho;
	
	struct dogdados dog[tam];
	struct substituidos cao[tam2];
	
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
		dog[i].pontos = 0;
	}
	
	//menu
	
	while(comando != 6){
		printf("\n\nescolha uma opcao: ");
		printf("\n1. exibir dados.");
		printf("\n2. substituir animais (max. 5).");
		printf("\n3. premiar cao idosinho s2.");
		printf("\n4. registrar primeiro desfile.");
		printf("\n5. registrar segundo desfile.");
		printf("\n6. encerrar programa.");
		printf("\no que deseja?: ");
		scanf("%d", &comando);
		
		//exibir dados
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
					printf("\npontuacao: %d", dog[i].pontos);
				}
			}
		}
		
		//substituir animal
		if(comando == 2){
			printf("\ncodigo do animal substituido: ");
			scanf("%d", &i);

            x=0;
            for(j=0; j<tam2, x=0; j++) {
                if(cao[j].vazio != 1) {
                    cao[j].vazio = 1;
                    //deu erro quando tentei copiar o struct de nome
                    cao[j].idade = dog[i].idade;
                    cao[j].peso = dog[i].peso;
                    cao[j].desfile = dog[i].desfile;
                    cao[j].pontos = dog[i].pontos;
                    x = 1;
                }
            }
				
			printf("\ninforme o nome do novo animal: ");
			scanf("%s", dog[i].nome);
			printf("informe a idade do animal: ");
			scanf("%d", &dog[i].idade);
			printf("informe o peso do animal: ");
			scanf("%lf", &dog[i].peso);
			dog[i].desfile = 0;
		}
		
		//premiar cao idoso
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
		
		//registrar desfile
        if(comando == 4) {
            printf("\ninforme 1 para sim. \ninforme 2 para nao.");
            for(i=0; i<tam; i++) {

                printf("\nanimal %d (%s) defilou?: ", i, dog[i].nome);
                scanf("%d", &j);

                if(j==1) {
                    dog[i].desfile = 1;
                    printf("qual foi sua pontuacao?: ");
                    scanf("%d", &dog[i].pontos);
                } else {
                    naodesf++;
                }

            }
            printf("\n%d animais nao desfilaram.", naodesf);
        }
        
        //segundo desfile
        if(comando == 5) {
        	printf("\nanimais no segundo desfile: \n");
        	for(i=0; i<tam; i++) {
        		if(dog[i].desfile == 0) {
        			printf("%s. pontuacao: ", dog[i].nome);
        			scanf("%d", &dog[i].pontos);
        			dog[i].desfile = 2;
				}
			}
		}
		
	}
	
	return 0;
}
