#include <stdio.h>
#include <math.h>

int main ( ) {
	
	int delta, aux;
	float x1, x2, a, b, c;
	
	printf("informe A: ");
	scanf("%f", &a);
	printf("informe B: ");
	scanf("%f", &b);
	printf("informe C: ");
	scanf("%f", &c);
	
	if(b != 0 && c != 0) {
		delta = ((b) * (b)) - 4 * a * c;
		
		if(delta > 0) {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			
			if(x1 > x2) {
				aux = x1;
				x1 = x2;
				x2 = aux;
			}
		
			printf("\nraizes: %.1f e %.1f\n", x1, x2);
			
			if(a > 0) {
				printf("f(x) = 0 para x = %.1f ou x = %.1f\n", x1, x2);
				printf("f(x) > 0 para x < %.1f ou x > %.1f\n", x1, x2);
				printf("f(x) < 0 para %.1f < x < %.1f\n", x1, x2);
			}
			
			if(a < 0) {
				printf("f(x) = 0 para x = %.1f ou x = %.1f\n", x1, x2);
				printf("f(x) > 0 para %.1f < x < %.1f\n", x1, x2);
				printf("f(x) < 0 para x < %.1f ou x > %.1f\n", x1, x2);
			}
		}
		
		if(delta == 0) {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			
			if(x1 > x2) {
				aux = x1;
				x1 = x2;
				x2 = aux;
			}
		
			printf("\nraizes: %.1f e %.1f\n\n", x1, x2);
			
			if(a > 0) {
				printf("f(x) = 0 para %.1f = x = %.1f\n", x1, x2);
				printf("f(x) > 0 para todo x diferente de %.1f\n", x1);
				printf("nao existe x pertencente aos reais tal que f(x) < 0\n");
			}
			
			if(a < 0) {
				printf("f(x) = 0 para %.1f = x = %.1f\n", x1, x2);
				printf("nao existe x pertencente aos reais tal que f(x) > 0\n");
				printf("f(x) < 0 para todo x diferente de %.1f\n", x1);
			}
		}
		
		if(delta < 0) {
			if(a > 0) {
				printf("nao existe x pertencente aos reais tal que f(x) = 0\n");
				printf("f(x) > 0 para todo x pertencente aos reais\n");
				printf("nao existe x pertencente aos reais tal que f(x) < 0\n");
			}
			if(a < 0) {
				printf("nao existe x pertencente aos reais tal que f(x) = 0\n");
				printf("nao existe x pertencente aos reais tal que f(x) > 0\n");
				printf("f(x) < 0 para todo x pertencente aos reais\n");
			}
		}
	}
	
	if(b == 0 && c != 0) {
		delta = -4 * a * c;
		
		if(delta > 0) {
			x1 = (+ sqrt(delta)) / (2*a);
			x2 = (- sqrt(delta)) / (2*a);
			
			if(x1 > x2) {
				aux = x1;
				x1 = x2;
				x2 = aux;
			}
		
			printf("\nraizes: %.1f e %.1f\n\n", x1, x2);
			
			if(a > 0) {
				printf("f(x) = 0 para x = %.1f ou x = %.1f\n", x1, x2);
				printf("f(x) > 0 para x < %.1f ou x > %.1f\n", x1, x2);
				printf("f(x) < 0 para %.1f < x < %.1f\n", x1, x2);
			}
			
			if(a < 0) {
				printf("f(x) = 0 para x = %.1f ou x = %.1f\n", x1, x2);
				printf("f(x) > 0 para %.1f < x < %.1f\n", x1, x2);
				printf("f(x) < 0 para x < %.1f ou x > %.1f\n", x1, x2);
			}
		}
		
		if(delta < 0) {
			if(a > 0) {
				printf("nao existe x pertencente aos reais tal que f(x) = 0\n");
				printf("f(x) > 0 para todo x pertencente aos reais\n");
				printf("nao existe x pertencente aos reais tal que f(x) < 0\n");
			}
			if(a < 0) {
				printf("nao existe x pertencente aos reais tal que f(x) = 0\n");
				printf("nao existe x pertencente aos reais tal que f(x) > 0\n");
				printf("f(x) < 0 para todo x pertencente aos reais\n");
			}
		}	
	}
	
	if(b != 0 && c == 0) {
		delta = (b) * (b);
		
		x1 = (-b + sqrt(delta)) / (2.0*a);
		x2 = (-b - sqrt(delta)) / (2.0*a);
		
		if(x1 > x2) {
			aux = x1;
			x1 = x2;
			x2 = aux;
		}
		
		printf("\nraizes: %.1f e %.1f\n\n", x1, x2);
			
		if(a > 0) {
			printf("f(x) = 0 para x = %.1f ou x = %.1f\n", x1, x2);
			printf("f(x) > 0 para x < %.1f ou x > %.1f\n", x1, x2);
			printf("f(x) < 0 para %.1f < x < %.1f\n", x1, x2);
		}
			
		if(a < 0) {
			printf("f(x) = 0 para x = %.1f ou x = %.1f\n", x1, x2);
			printf("f(x) > 0 para %.1f < x < %.1f\n", x1, x2);
			printf("f(x) < 0 para x < %.1f ou x > %.1f\n", x1, x2);
		}	
	}
	
	return 0;
}
