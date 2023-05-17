#include <stdio.h>
int main ( ) {
	
	int valorI, vezes, resultado, c=0;
	
	printf("informe o valor inicial: ");
	scanf("%d", &valorI);
	
	printf("informe quantas vezes deseja calcular: ");
	scanf("%d", &vezes);
	
	//ao aplicar a um num par, resultado = metade
	//ao aplicar a um num impar, resultado = triplo do valor + 1;
	
	while(c < vezes) {
		if(valorI % 2 == 0) {
			resultado = valorI / 2;
			valorI = resultado;
		} else {
			if(valorI % 2 != 0) {
				resultado = (3 * valorI) + 1;
				valorI = resultado;
			}
		}
		c++;
	}
	
	printf("ultimo resultado: %d", valorI);
	
	return 0;
}
