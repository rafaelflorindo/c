#include<stdio.h>
int main(void)
{
	char nota;
	scanf("%c", &nota);
	switch (nota) {
		case 'a':
		case 'A':
			printf("Aprovado");
		break;
		case 'b':
		case 'B':
			printf("Aprovado");
		break;
		case 'c':
		case 'C':
			printf("Recupera��o");
		break;
		default:
			printf("Aluno n�o avaliado");
		break;
	}
}
