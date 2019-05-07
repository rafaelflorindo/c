#include<stdio.h>
int main(){
	float nota1, nota2, soma, media;
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	soma = nota1 + nota2;
	media = soma / 2;
	if (media >= 7.0) {
		printf ("Aprovado com Média = %.2f", media);
	}
	return 0;
}
