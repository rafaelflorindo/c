//Estruturas condicionais serão usadas dentro de projetos em todas: as regras de negócio, validações e demais funções ou métodos que venha a criar. O IF sem dúvida é o mais utilizado. Analise o código abaixo:
#include<stdio.h>

int main(void){
	int a = 10;
	
	if (a = 11) {
	  printf("1");
	}
	
	if (a == 10) {
	  printf("%d", a);
	}

	printf("%d", a);
}
/*

De acordo com o código acima, assinale a alternativa correta para a saída em tela?
10
110
111
1010
101010
Feedback:
Resultado: 111

Nesta atividade acontece algo interessante que pode passar facilmente despercebido.
a recebe 10.
Depois foi criada uma estrutura condicional e dentro dela uma nova atribuição sendo a recebendo 11. NOTE: NÃO Ë UMA COMPARAÇÃO == E SIM UMA ATRIBUIÇÃO =.
Como a atribuição está correta será retornado TRUE e com isso entrará no IF e imprimirá "1".

Depois ele pergunta se a == 10 mas não é mais, após o IF anterior a == 11
Não faz nada.

Por fim, imprimi a que 'é 11

Resultado: 111

*/
