#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Pessoa
{
	int codigo;
    char nome[45];
	char sobrenome[10];
    char dataNascimento[10];
    char dataAdmissao[10];
    char rg[10];
    float salario;
};
struct Pessoa funcionario[2];

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j;
	for(i=0; i<2; i++){
		system("cls");
		printf("Informe o C�digo: ");
		fflush(stdin);
		scanf("%d", &funcionario[i].codigo);
		printf("Informe o nome:  ");
		fflush(stdin);
		gets(funcionario[i].nome);
		printf("Informe o sobrenome:  ");
		fflush(stdin);
		gets(funcionario[i].sobrenome);
		printf("Informe a data de Nascimento:  ");
		fflush(stdin);
		gets(funcionario[i].dataNascimento);
		printf("Informe a data de Admiss�o:  ");
		fflush(stdin);
		gets(funcionario[i].dataAdmissao);
		printf("Informe a data de o RG");
		gets(funcionario[i].rg);
		printf("Informe o Sal�rio");
		scanf("%f", &funcionario[i].salario);
	}
	printf("  ITEM - CODIGO - NOME - SOBRENOME - DATA NASCIMENTO - DATA ADMISS�O - RG - SAL�RIO (R$)\n");
	//int j;
	for(j=0;j<2;j++){
		printf("\n    %d   - %d  ", j, funcionario[j].codigo);
		printf(" - %s", funcionario[j].nome);
		printf(" - %s", funcionario[j].sobrenome);
		printf("   - %s", funcionario[j].dataNascimento);
		printf("   - %s", funcionario[j].dataAdmissao);
		printf("   - %s", funcionario[j].rg);
		printf("   - %f", funcionario[j].salario);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
