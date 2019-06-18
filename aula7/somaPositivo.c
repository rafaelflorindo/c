#include<stdio.h>
#include<math.h>
int main(){
	int vetor[10];
	int somaPositivo, somaNegativo = 0;
	int i;
	for (i=0;i<3; i++){
		printf("Entre com o numero: ");
		scanf("%d", &vetor[i]);
	}
	for (i=0;i<3; i++){
		if (vetor[i]>=0){
			somaPositivo = somaPositivo + 1;	
			printf("\nPosição [%d] = %d positivo",i, vetor[i]);
		}
		else{
			somaNegativo = somaNegativo + 1;	
			printf("\nPosição  [%d] = %d negativo", i, vetor[i]);
		}
	}
	printf("\nSoma Positivo = %d", somaPositivo);
	printf("\nSoma Negativo = %d", somaNegativo);
	return 0;
}
