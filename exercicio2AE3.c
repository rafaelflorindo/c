#include<stdio.h>

void calculaIdade(int anoAtual, int anoNascimento, char nome[30]);
int main(void)
{
	int anoAtual, anoNascimento;
	char nome[30];
	printf("Informa o seu nome: ");
	gets(nome);
	printf("Informa o ano Atual e depois o ano de Nascimento\n");
	scanf("%d%d", &anoAtual, &anoNascimento);
	calculaIdade(anoAtual, anoNascimento, nome);	
}
void calculaIdade(int anoAtual, int anoNascimento, char nome[30])
{
	int idade = anoAtual - anoNascimento;
	printf("Ol� %s, os nascidos no ano de  %d, em %d, estar�o com %d anos de idade.", nome, anoNascimento, anoAtual, idade);
}
