#include <stdio.h>

int main () {
	int v[10], i, c, rep;
	
	printf("informe a senha, um numero por vez: \n");
	for (i = 0; i < 10; i++) {
		printf("digito %d: ", i+1);
		scanf("%d", &v[i]);
	}
	
	for (c = 0; c < 10; c++) {
		for (i = 0; i < 10; i++) {
			if (v[c] == v[i] && c != i) {
				rep++;
			}
		}
	}

	if (rep > 3) {
		printf("senha invalida :(");
	} else {
		printf("senha valida :)");
	}
	
	return 0;
}
