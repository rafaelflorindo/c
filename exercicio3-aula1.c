#include<stdio.h>

int main(){
	float salarioLiquido, salarioBruto, desconto;
	
	printf("Informe o seu salário Bruto: ");
	scanf("%f", &salarioBruto);
	
	desconto = (salarioBruto * 11)/100;
	salarioLiquido = salarioBruto - desconto;

	printf("Salario Liquido = %.2f", salarioLiquido);
	return 0;
}
