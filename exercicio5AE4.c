/*Na linguagem C, existem as fun��es definidas pela linguagem que s�o aquelas que j� est�o dispon�veis e que sempre iremos utilizar em nossas aplica��es. N�o precisamos reinventar o que j� foi criado, apenas utiliz�-lo. A vantagem das fun��es nativas do C � que atendem a objetivos muito muito espec�ficos, como manipular strings, arrays, datas ou arquivos, por exemplo. Todas as fun��es t�m escopo global, assim, elas podem ser chamadas fora de uma fun��o mesmo que tenham sido definidas dentro e vice-versa.

Baseando-se nessas informa��es, analise o c�digo a seguir:
*/
#include<stdio.h>
    int valor = 2;
    int novo_valor;
 int main(void){   
    int funcao_um (int valor)
    {
        return valor + 1;
    }

    int funcao_dois (int valor)
    {
        return funcao_um (valor) + valor;
    }

    novo_valor = funcao_dois (valor);

    printf("%d", novo_valor);
}

/*Qual valor que a vari�vel novo_valor ir� possuir ap�s a chamada da fun��o funcao_dois()?

Alternativas
7
2
5
3
6

Resposta correta:
O valor ser� 5.
� poss�vel criar ou declarar uma fun��o dentro de outra, mas mesmo assim, ela ter� escopo global, o que significa que poder� ser invocada por qualquer outra fun��o ou pelo programa principal. Ent�o quando o valor 2 � passado para fun��o funcao_dois � feito a soma da chamada da fun��o funcao_um que retorna 3 mais o valor que a fun��o funcao_dois possui que � 2 logo 3 + 2 = 5..
logo 3 + 2 = 5.*/
