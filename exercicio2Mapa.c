#include<stdio.h>
#define LINHA  4
#define COLUNA 6

void preencherMatriz(float vendas[LINHA][COLUNA]){
	int i, j;
	float vendaDia;
	for (i = 0; i < LINHA; i++){
		printf("**** Semana %d *****", i+1);
		printf("\n");
		for(j = 0; j < COLUNA; j++){
			printf("Informe o valor da venda do dia %d: ", j+1);
			scanf("%f", &vendaDia);
			vendas[i][j] = vendaDia;
		}
	}
}

void mostrarMatriz(float vendas[LINHA][COLUNA]){
	int i, j;
	printf ("\t\tDIA 1 \tDIA2 \tDIA3 \tDIA 4 \tDIA 5 \tDIA 6");
	printf("\n");
	for (i = 0; i < LINHA; i++){
		printf ("Semana %d", i + 1);
		for(j = 0; j < COLUNA; j++){
			printf("\t%.2f", vendas[i][j]);
		}
		printf("\n");
	}
}	

float mediaVendas(float vendas[LINHA][COLUNA]){
	float media, soma;
	int i, j, k;
	k=0;
	soma = 0;
	for (i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			soma += vendas[i][j];
			k++;
		}
	}
	printf("\nSoma de vendas: R$ %.2f ", soma);	
	media  = soma / k;
	return media;
}

void maiorVenda(float vendas[LINHA][COLUNA]){
	int i, j, posicaoLinhaMenor, posicaoColunaMenor, posicaoLinhaMaior, posicaoColunaMaior;
	float maior, menor;
	maior=menor=vendas[0][0];
    //maior=vendas[0][0];
	for (i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			if(vendas[i][j] < menor){
				menor=vendas[i][j];
				posicaoLinhaMenor= i;
				posicaoColunaMenor= j;
           	}
			if(vendas[i][j] > maior){
				maior=vendas[i][j];
				posicaoLinhaMaior= i;
				posicaoColunaMaior= j;
           }
		}
	}
	printf("\n\n******* Maior venda: R$ %f ", maior);
	printf("\nSemana %d, dia %d ", posicaoLinhaMaior + 1, posicaoColunaMaior + 1);		
	printf("\n\n******* Menor venda: R$ %f ", menor);
	printf("\nSemana %d, dia %d ", posicaoLinhaMenor + 1, posicaoColunaMenor + 1);
}

int main(){
	float mediaFinal;
	float vendas[LINHA][COLUNA];
	int op;
	do{
		system("cls");
		printf("\n1 - Prencher com as vendas.");
		printf("\n2 - Exibir as vendas.");
		printf("\n3 - Media de Vendas");
		printf("\n4 - Maior e Menor Venda");
		printf("\n5 - Sair");
		scanf ("%d", &op);
		switch (op){
			case 1: 
				system("cls");
				preencherMatriz(vendas);
				printf("\n");
				system("Pause");
				break;
			case 2: 
				system("cls");
				mostrarMatriz(vendas);
				printf("\n");
				system("Pause");
				break;
			case 3: 
				system("cls");
				mostrarMatriz(vendas);
				mediaFinal = mediaVendas(vendas);
				printf("\nMédia Final: R$ %.2f", mediaFinal);
				printf("\n");
				system("Pause");
				break;
			case 4: 
				system("cls");
				mostrarMatriz(vendas);
				maiorVenda(vendas);
				printf("\n");
				system("Pause");
				break;
			default:
				printf ("Saindo da aplicação"); 
		}				
	}while(op!=5);
}
