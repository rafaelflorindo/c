#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, potencia, delta;
	float x, xi, xii;
	printf("Informe o valor de a");
	scanf("%d", &a);
	printf("Informe o valor de b");
	scanf("%d", &b);
	printf("Informe o valor de c");
	scanf("%d", &c);
	potencia = pow(b, 2);
	printf("%d", potencia);
	delta = potencia - (4*a*c);
	printf("\n\n%d", delta);//1.3.-10
	if(delta > 0){
		xi = (b + sqrt(delta))/(2*a);
		xii = (b - sqrt(delta))/(2*a);
		printf("\nxi = %.2f \t xii = %.2f", xi,xii);
	}else if(delta == 0){
		printf("A equação possui raiz reais iguais");
		xi = (b + sqrt(delta))/(2*a);
		xii = (b - sqrt(delta))/(2*a);
		printf("\nxi = %.2f \t xii = %.2f", xi,xii);
	}else if(delta < 0){
		printf("A equação não possui raiz reais");
	}
	return 0;
}
