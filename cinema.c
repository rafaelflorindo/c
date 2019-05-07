#include<stdio.h>
int main(){
	float media;
	printf("Informe a média: ");
	scanf("%f", &media);

	if ((media >= 9.0) && (media <= 10.0)) {
		printf ("Você ganhou um bilhete para filme de cartaz no cinema.");
	}else{
		printf ("Não foi desta vez, estude mais.");
	}
	return 0;
}
