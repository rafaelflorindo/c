#include<stdio.h>
#define MES 12
int main(){
	int ano, meses;
	printf("Informe a quantidade de anos: ");
	scanf("%d", &ano);
	meses = ano * MES;
	printf ("Em %d ano(s) teremos %d meses", ano, meses);
	return 0;
}
