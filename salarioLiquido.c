#include<stdio.h>

int main(){
	float salarioLiquido, salarioBruto, desconto;
	int percDesconto = 10;
	
	printf("Informe o salario Bruto do funcionario: ");
	scanf("%f", &salarioBruto);
	
	desconto = (salarioBruto * percDesconto)/100;
	salarioLiquido = salarioBruto - desconto;
	
	printf("\nSalario Bruto R$ %.2f", salarioBruto);
	printf("\nDescontando %d R$ %.2f", percDesconto, desconto);
	printf("\nSalario Liquido R$ %.2f", salarioLiquido);
	return 0;
}
