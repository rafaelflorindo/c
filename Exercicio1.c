//Analise o algoritmo abaixo:
#include <stdio.h>
#define MAX 5 

int main(void) { 
   int A[MAX] = {9, 3, 2, 7}; 
   int i;
   i=0; 
   do
   {
   		if(A[i]%2==0)
			printf("%d", A[i]); 
		else
			printf("%d", A[i]); 
   		i++;
   }
   while(i < MAX);      
}

/*De acordo com o algoritmo, assinale a alternativa correta
I - A estrutura de repetição do while irá gerar um número a mais, devido ele executar automaticamente o primeiro laço
II - A estrutura de condição irá imprimir os números pares e impares
III - O contador i, esta colocado em local errado, deveria estar fora da condição
IV - Será impresso 93270
V -  Será impresso 9327

É correto o que se afirma em:
I e II, apenas.
I e IV, apenas.
II e IV, apenas.
I, II e III, apenas.
I, II, III, IV, V

Correta: II e IV
A alternativa I esta errada, pois o critério de parada é o mesmo que se fosse utilizado no while, e como vetor inicia em 0 ele executará 5 vezes
A alterantiva III esta errada, pois o contados esta em local correto, a nossa estrutura de condição não faz uso de {}, desta forma ela executará apenas a primeira linha após a condição
A alterantiva V esta errada, pois o o vetor é de 5 posições, neste caso, estamos alimentando 4 posições e a última esta recebendo o valor 0
*/
