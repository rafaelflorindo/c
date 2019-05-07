#include<stdio.h>

int main(){
	float nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada;
	
	printf("Informe a Nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a Nota 2: ");
	scanf("%f", &nota2);
	printf("Informe a Nota 3: ");
	scanf("%f", &nota3);
	printf("Informe a peso 1: ");
	scanf("%f", &peso1);
	printf("Informe a peso 2: ");
	scanf("%f", &peso2);
	printf("Informe a peso 3: ");
	scanf("%f", &peso3);
	
	mediaPonderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/(peso1 + peso2 + peso3);
	printf("Media ponderada entre %f, %f e %f = %f", nota1, nota2, nota3 , mediaPonderada);
	return 0;
}
