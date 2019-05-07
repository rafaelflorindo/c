//Analise o algoritmo abaixo:
#include <stdio.h> 
#define MAX 5
int ordenar(int vetor[MAX]);
void imprimir(int vetor[MAX]);

void main(void) { 
	int A[MAX] = {8, 5, 9, 4, 15}; 
	printf("\nVetor Original");
	imprimir(A);
	ordenar(A);
	printf("\nVetor Ordenado");
	imprimir(A);
} 
int ordenar(int vetor[MAX])
{
	int i, j, aux;
	for (i=0; i<MAX; i++){
		for (j=0; j<i; j++){
			if(vetor[j] > vetor[j + 1]){
				aux = vetor[j];	
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;	
			}
		}
	}
}
void imprimir(int vetor[MAX]){
	int i; 
	for (i=0; i<MAX; i++) printf("\n[%d] = %d", i, vetor[i]);
}

/*De acordo com o algoritmo, assinale a alternativa correta
I - Foi utilizado o recurso de prototipação de funções.
II - Na função imprimir, temos dois comandos na mesma linha, este fato ocasionará em um erro de sintaxe.
III - Os laços de repetições, entraram em um laço infinito, pois estão utilizando uma variável do tipo constante, e esta não é visivel pelas funções, apenas no método main
IV - Este método de ordenação é conhecido como método da bolha.
V - Este método da bolha não funciona para um vetor que já esta ordenado.

É correto o que se afirma em:
I e II, apenas.
I e IV, apenas.
II e III, apenas.
I, II e III, apenas.
I, II, III, IV, V

Correta: I e IV
A alternativa II esta errada, pois é possível colocar neste caso duas linhas.
A alterantiva IV esta errada, a constante é visivel por todo o programa.
A alternativa V esta errado, pois este metodo funciona das duas formas, o que acontece é que não será realizado a troca de valores, pois todos os valores estão ordenados.
*/
