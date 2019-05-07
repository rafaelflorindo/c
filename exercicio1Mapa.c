#include<stdio.h>
#include<string.h>
//declaração do RA do aluno
#define RA "136334799"
	
int main(void)
{
	int tamanho;
	tamanho = strlen(RA);
	int raVetor[tamanho];
	int i = 0;
	
	printf("Ra com %d caracteres", tamanho);
	printf("\nRA informado: %s", RA);
	
	printf("\nAlimentando o vetor com o RA:");
	while(i < tamanho){
		raVetor[i] = RA[i];
		i++;
	}
	
	for(i=0; i < tamanho; i++){
		printf("\n[%d] = %c", i, raVetor[i]);
	}
	return 0;
}
