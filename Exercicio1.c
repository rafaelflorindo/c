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
I - A estrutura de repeti��o do while ir� gerar um n�mero a mais, devido ele executar automaticamente o primeiro la�o
II - A estrutura de condi��o ir� imprimir os n�meros pares e impares
III - O contador i, esta colocado em local errado, deveria estar fora da condi��o
IV - Ser� impresso 93270
V -  Ser� impresso 9327

� correto o que se afirma em:
I e II, apenas.
I e IV, apenas.
II e IV, apenas.
I, II e III, apenas.
I, II, III, IV, V

Correta: II e IV
A alternativa I esta errada, pois o crit�rio de parada � o mesmo que se fosse utilizado no while, e como vetor inicia em 0 ele executar� 5 vezes
A alterantiva III esta errada, pois o contados esta em local correto, a nossa estrutura de condi��o n�o faz uso de {}, desta forma ela executar� apenas a primeira linha ap�s a condi��o
A alterantiva V esta errada, pois o o vetor � de 5 posi��es, neste caso, estamos alimentando 4 posi��es e a �ltima esta recebendo o valor 0
*/
