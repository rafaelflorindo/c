//Analise o algoritmo abaixo:
#include <stdio.h> 
#define MAX 5 

int pertence(int x, int L[], int n);
int main(void){
	int A[MAX] = {9, 1, 2, 7}; 
   	int i, numero; 
   	numero = 1;
	if(i = pertence(numero, A, MAX))
		printf("Sim!!! O valor pertence a posi��o [%d]", i);
	else
		printf("N�o!!!");
} 
int pertence(int x, int L[], int n) { 
	int i, j; 
	j = 1;
   	for(i=0; i<n; i++)       
   		if( x == L[i] ) 
          return i; 
   	return 0; 
}
/*De acordo com o algoritmo, assinale a alternativa correta
I - A fun��o pertence() devolve o valor encontrado que no caso � 1 e n�o a posi��o.
II - A fun��o pertence() devolve o indice da posi��o do valor encontrado � a posi��o 1 do vetor.
III - O vetor A, inicia da posi��o 0.
IV - O vetor A, inicia da posi��o 1.
V - .

� correto o que se afirma em:
I e II, apenas.
I e IV, apenas.
II e III, apenas.
I, II e III, apenas.
I, II, III, IV, V

Correta: II, III
A alternativa II esta errada, .
A alterantiva IV esta errada, .
A alternativa V esta errado, 
*/
