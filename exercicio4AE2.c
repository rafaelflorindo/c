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
			printf("Recuperação");
		break;
		default:
			printf("Aluno não avaliado");
		break;
	}
}
