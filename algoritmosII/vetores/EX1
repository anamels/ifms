#include <stdio.h>

int main () {
	
	int v[5], i, c, rep;
	rep = 0;
	
	for (i = 0; i < 5; i++) {
		printf("informe um numero: ");
		scanf("%d", &v[i]);
	}
	
	for (c = 0; c < 5; c++) {
		for (i = 0; i < 5; i++) {
			if (v[c] == v[i] && c != i) {
				rep++;
			}
		}
	}
	
	printf("%d numeros repetidos", rep);
	
	return 0;
}
