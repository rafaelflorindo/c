#include<stdio.h>

int main(){
	int anoNascimento, anoAtual, idade;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNascimento;
	printf("Idade = %d", idade);
}
