#include<stdio.h>
int main(){
	int valor;
	
	printf("Informe o valor: ");
	scanf("%d", &valor);

	if (!(valor >= 0)) {
		printf("Valor inv�lido.");
	}else{
		printf ("Valor v�lido, voc� informou o valor %d.", valor);
	}
	return 0;
}
