#include<stdio.h>
int main(){
	float media;
	printf("Informe a m�dia: ");
	scanf("%f", &media);

	if ((media >= 9.0) && (media <= 10.0)) {
		printf ("Voc� ganhou um bilhete para filme de cartaz no cinema.");
	}else{
		printf ("N�o foi desta vez, estude mais.");
	}
	return 0;
}
