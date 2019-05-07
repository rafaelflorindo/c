#include<stdio.h>
int main(){
	int valor;
	
	printf("Informe o valor: ");
	scanf("%d", &valor);

	if (!(valor >= 0)) {
		printf("Valor inválido.");
	}else{
		printf ("Valor válido, você informou o valor %d.", valor);
	}
	return 0;
}
