#include<stdio.h>
int main(){
	int codigo;
	
	printf("Informe o c�digo: ");
	scanf("%d", &codigo);

	if ((codigo == 1) || (codigo == 2) || (codigo == 3)) {
		if (codigo == 1) printf("Um");
		if (codigo == 2) printf("Dois");
		if (codigo == 3) printf("Tres");
	}else{
		printf ("C�digo Inv�lido.");
	}
	return 0;
}
