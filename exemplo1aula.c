#include<stdio.h>
int main(){
	int num1, num2, soma;
	
	printf("Informe o n�mero 1:");
	scanf("%d", &num1);
	printf("Informe o n�mero 2:");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	printf("Soma de %d com %d = %d", num1, num2, soma);
	return 0;
}
