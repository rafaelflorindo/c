#include<stdio.h>
#include"soma.h"

int main(){
	int num;
	printf("Soma = %d", soma(14,2));
	
	printf ("\nEntre com numero: ");
    scanf ("%d",&num);
    
	if(parImpar(num)){
    	printf ("\n\nO numero e par.\n");
	}else{
		printf ("\n\nO numero e impar.\n");
	}

	return 0;
}
