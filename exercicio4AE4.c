//Estruturas condicionais ser�o usadas dentro de projetos em todas: as regras de neg�cio, valida��es e demais fun��es ou m�todos que venha a criar. O IF sem d�vida � o mais utilizado. Analise o c�digo abaixo:
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

De acordo com o c�digo acima, assinale a alternativa correta para a sa�da em tela?
10
110
111
1010
101010
Feedback:
Resultado: 111

Nesta atividade acontece algo interessante que pode passar facilmente despercebido.
a recebe 10.
Depois foi criada uma estrutura condicional e dentro dela uma nova atribui��o sendo a recebendo 11. NOTE: N�O � UMA COMPARA��O == E SIM UMA ATRIBUI��O =.
Como a atribui��o est� correta ser� retornado TRUE e com isso entrar� no IF e imprimir� "1".

Depois ele pergunta se a == 10 mas n�o � mais, ap�s o IF anterior a == 11
N�o faz nada.

Por fim, imprimi a que '� 11

Resultado: 111

*/
