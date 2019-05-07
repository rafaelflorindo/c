#include<stdio.h>
int main(){
	int a, b, aux;
	
	printf("Informe A: ");
	scanf("%d", &a);
	
	printf("Informe B: ");
	scanf("%d", &b);
	if (a > b) {
		aux = a;
		a = b;
		b = aux;
		printf ("Os valores foram ordenados para %d, %d.", a, b);
	}else{
		printf ("Não foi necessário ordenar os valores %d, %d.", a, b);
	}
	return 0;
}
