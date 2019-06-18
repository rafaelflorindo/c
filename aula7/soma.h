/*Cabeçalho da biblioteca*/
/*
#ifndef = O pré-processador também tem estruturas condicionais. 
No entanto, como as diretivas são processadas antes de tudo, 
só podemos usar como condições expressões que envolvam constantes e 
símbolos do pré-processador


Um uso muito comum das diretivas de compilação é em arquivos-cabeçalho, 
que só precisam/devem ser incluídos uma vez. Muitas vezes incluímos 
indiretamente um arquivo várias vezes, pois muitos cabeçalhos dependem 
de outros cabeçalhos. Para evitar problemas, costuma-se envolver o arquivo 
inteiro com um bloco condicional que só será compilado se o arquivo já não 
tiver incluído. Para isso usamos um símbolo baseado no nome do arquivo. 
Por exemplo, se nosso arquivo se chama "cabecalho.h", é comum usar um 
símbolo com o nome CABECALHO_H: 
*/

#ifndef BIBLIOTECA_H //nome da minha biblioteca interna
#define BIBLIOTECA_H //defino a bibliteca

/*a biblioteca abaixo, espera receber duas variáveis do tipo inteiro,
e retorna um número inteiro*/
int soma(int a, int b){
	return (a + b);
}
/*a biblioteca abaixo, espera receber uma variável do tipo inteiro,
e retorna um para PAR e zero para IMPAR*/
int parImpar(int num){
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
#endif
