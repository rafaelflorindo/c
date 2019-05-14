#include<stdio.h>

int main(){
	float n1, n2, n3, p1, p2, p3, mp;
	
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	printf("Informe a nota 2: ");
	scanf("%f", &n2);
	printf("Informe a nota 3: ");
	scanf("%f", &n3);
	
	printf("Informe a peso 1: ");
	scanf("%d", &p1);
	printf("Informe a peso 2: ");
	scanf("%d", &p2);
	printf("Informe a peso 3: ");
	scanf("%d", &p3);
	mp = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
	
	printf("Media ponderada = %.2f", mp);
	
	return 0;
}
