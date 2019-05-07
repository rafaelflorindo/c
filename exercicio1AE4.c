#include<stdio.h>
#include<math.h>
#define TAM 5
int ordenarDesc(int vetor[]);
main()
{
	int i, a[TAM], b[TAM], c[TAM], aux[TAM];
	for(i=1; i <= TAM; i++){
		printf("Informe o valor [%d de %d]", i, TAM);
		scanf ("%d", &a[i]);
		b[i]= pow(a[i], 2); 
		c[i]= a[i]++;
		aux[i] = b[i] + c[i];
	}
	ordenarDesc(aux);
	for(i=1; i <= TAM; i++){
		printf("[%d]\t" , aux[i]);
	}
}
int ordenarDesc(int vetor[]){
	return vetor;
}
