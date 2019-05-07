/*Na linguagem C, existem as funções definidas pela linguagem que são aquelas que já estão disponíveis e que sempre iremos utilizar em nossas aplicações. Não precisamos reinventar o que já foi criado, apenas utilizá-lo. A vantagem das funções nativas do C é que atendem a objetivos muito muito específicos, como manipular strings, arrays, datas ou arquivos, por exemplo. Todas as funções têm escopo global, assim, elas podem ser chamadas fora de uma função mesmo que tenham sido definidas dentro e vice-versa.

Baseando-se nessas informações, analise o código a seguir:
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

/*Qual valor que a variável novo_valor irá possuir após a chamada da função funcao_dois()?

Alternativas
7
2
5
3
6

Resposta correta:
O valor será 5.
É possível criar ou declarar uma função dentro de outra, mas mesmo assim, ela terá escopo global, o que significa que poderá ser invocada por qualquer outra função ou pelo programa principal. Então quando o valor 2 é passado para função funcao_dois é feito a soma da chamada da função funcao_um que retorna 3 mais o valor que a função funcao_dois possui que é 2 logo 3 + 2 = 5..
logo 3 + 2 = 5.*/
