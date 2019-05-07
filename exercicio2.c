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
I - Foi utilizado o recurso de prototipa��o de fun��es.
II - Na fun��o imprimir, temos dois comandos na mesma linha, este fato ocasionar� em um erro de sintaxe.
III - Os la�os de repeti��es, entraram em um la�o infinito, pois est�o utilizando uma vari�vel do tipo constante, e esta n�o � visivel pelas fun��es, apenas no m�todo main
IV - Este m�todo de ordena��o � conhecido como m�todo da bolha.
V - Este m�todo da bolha n�o funciona para um vetor que j� esta ordenado.

� correto o que se afirma em:
I e II, apenas.
I e IV, apenas.
II e III, apenas.
I, II e III, apenas.
I, II, III, IV, V

Correta: I e IV
A alternativa II esta errada, pois � poss�vel colocar neste caso duas linhas.
A alterantiva IV esta errada, a constante � visivel por todo o programa.
A alternativa V esta errado, pois este metodo funciona das duas formas, o que acontece � que n�o ser� realizado a troca de valores, pois todos os valores est�o ordenados.
*/
