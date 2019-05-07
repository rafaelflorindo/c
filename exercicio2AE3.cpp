#include<stdio.h>
#include<string.h>

void calculaIdade(int anoAtual, int anoNascimento)
{
	int idade = anoAtual - anoNascimento;
	printf("Os nascidos no ano de  %d, em %d, estarao com %d anos de idade.", anoNascimento, anoAtual, idade);
}
int main(void)
{
	int anoAtual, anoNascimento;
	printf("Informa o ano Atual e depois o ano de Nascimento\n");
	scanf("%d%d", &anoAtual, &anoNascimento);
	calculaIdade(anoAtual, anoNascimento);	
}
