#include<stdio.h>
int main(){
	float num1, num2;
	char op;
	while(true){
		printf("Digite um numero, operador, numero teclando enter entre eles");
		scanf("%f %c %f", &num1,&op,&num2);
		switch(op){
			case '+':
				printf("= %.2f", num1+num2);
				break;
			case '-':
				printf("= %.2f", num1-num2);
				break;
			case '*':
				printf("= %.2f", num1*num2);
				break;
			case '/':
				printf("= %.2f", num1/num2);
				break;
			default:
				printf("Operador desconhecido");
		}
	}
	return 0;
}
