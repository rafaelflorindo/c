#include<stdio.h>
int main (){
	
	char nome;
	char aluno[10];
	
	printf("Nome: ");
	scanf("%c", &nome);
	
	printf("Aluno: ");
	scanf("%s", aluno);
	
	printf("\nNome: %c", nome);
	printf("\nAluno: %s", aluno);
	return 0;
}
