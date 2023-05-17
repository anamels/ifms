#include <stdio.h>

int main(){
	int tam;
	printf("quantos numeros deseja ordenar?: ");
	scanf("%d", &tam);
	
	int v[tam], i, j, aux;
	
	for(i = 0; i < tam; i++){
		printf("informe um numero: ");
		scanf("%d", &v[i]);
	}
	
	printf("\nprimeira ordem: ");
	for(i = 0; i < tam; i++){
		printf("%d  ", v[i]);
	}
	
	for(j = 0; j < tam - 1; j++){
		for(i = 0; i < tam - 1; i++){
			if(v[i] > v[i + 1]){
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
			}
		}
	}

	printf("\nordem crescente: ");
	for(i = 0; i < tam; i++){
		printf("%d  ", v[i]);
	}
	
	return 0;
}
