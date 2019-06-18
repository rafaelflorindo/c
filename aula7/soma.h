/*Cabe�alho da biblioteca*/
/*
#ifndef = O pr�-processador tamb�m tem estruturas condicionais. 
No entanto, como as diretivas s�o processadas antes de tudo, 
s� podemos usar como condi��es express�es que envolvam constantes e 
s�mbolos do pr�-processador


Um uso muito comum das diretivas de compila��o � em arquivos-cabe�alho, 
que s� precisam/devem ser inclu�dos uma vez. Muitas vezes inclu�mos 
indiretamente um arquivo v�rias vezes, pois muitos cabe�alhos dependem 
de outros cabe�alhos. Para evitar problemas, costuma-se envolver o arquivo 
inteiro com um bloco condicional que s� ser� compilado se o arquivo j� n�o 
tiver inclu�do. Para isso usamos um s�mbolo baseado no nome do arquivo. 
Por exemplo, se nosso arquivo se chama "cabecalho.h", � comum usar um 
s�mbolo com o nome CABECALHO_H: 
*/

#ifndef BIBLIOTECA_H //nome da minha biblioteca interna
#define BIBLIOTECA_H //defino a bibliteca

/*a biblioteca abaixo, espera receber duas vari�veis do tipo inteiro,
e retorna um n�mero inteiro*/
int soma(int a, int b){
	return (a + b);
}
/*a biblioteca abaixo, espera receber uma vari�vel do tipo inteiro,
e retorna um para PAR e zero para IMPAR*/
int parImpar(int num){
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
#endif
