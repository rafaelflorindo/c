#include<stdio.h>
#include<math.h>
int main(){
	float media, peso[10];
	float soma=0;
	int i;
	for (i=0;i<10; i++){
		printf("Entre com o peso: ");
		scanf("%f", &peso[i]);
		soma = soma + peso[i];
	}
	media = soma/i;
	printf("Soma dos pesos = %5.2f", soma);
	printf("Media = %5.2f", media);
	return 0;
}
