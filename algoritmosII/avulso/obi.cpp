#include <stdio.h>
int main ( ){
	
	int t, n;
	
	//l� estrada e cidades
	scanf("%d%d", &t, &n);
	
	//l� distancia
	
	int v[n], i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	
	//colocar em ordem de lugar na estrada
	
	int j, aux;
	
	for(j = 1; j < n; j++) {
		for(i = 0; i < n-1; i++) {
			if(v[i] > v[i+1]) {
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}
		}
	} 
	
	//le primeira cidade
	//cria vetor pra armazenar distancia e armazena a primeira
	
	double d[n];
	
	double dist1 = (t - v[0]) + ((v[1] - v[0])/ 2.0) ;
	d[0] = dist1;
	
	//le ultima cidade e as outras
	//armazena nos vetores
	
	double dist, disult;
	
	for(i = 2, j=1; i <= n; i++, j++) {
		if(i == n){
			j = n - 1;
			disult = (t - v[j]) + ((v[j] - v[j - 1]) / 2.0);
			d[j] = disult;
		} else {
			dist = ((v[j] - v[j-1]) / 2.0) + ((v[j + 1] - v[j]) / 2.0);
			d[j] = dist;
		}
	}
	
	//ordem cresente das distancias
	
	for(j = 1; j < n; j++) {
		for(i = 0; i < n-1; i++) {
			if(d[i] > d[i+1]) {
				aux = d[i];
				d[i] = d[i+1];
				d[i+1] = aux;
			}
		}
	}
	
	printf("\n%.2lf", d[0]);
		
	return 0;
}
