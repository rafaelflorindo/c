#include<stdio.h>

int main(){
	int idade, anoNascimento, anoAtual;
	
	printf("Informe o seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNascimento;
	
	printf("Para voce que nasceu em %d, no ano de %d, terá %d anos de idade.", anoNascimento, anoAtual, idade);
	return 0;
}
