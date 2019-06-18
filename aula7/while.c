#include<stdio.h>
int main(){
    float nota[80];
    int k;
    float soma = 0;
    k=0;
	while(k<2){
        scanf("%f", &nota[k]);
        soma = soma + nota[k];
        k++;
    }
    float media = soma/2;
    k=0;
	while(k<2){
        printf("\nNota %d = %5.2f", k+1, nota[k]);
        k++;
    }
    printf("\nMedia = %5.2f", media);
}
