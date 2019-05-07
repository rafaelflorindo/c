#include <stdio.h>
______________________
int main(void)
{
	struct Veiculo carro;
	carro.portas = 4;
	carro.rodas = 5;
	carro.motor = 1;
	printf("Quantidade de portas: %d", carro.portas);
	printf("\nQuantidade de rodas: %d", carro.rodas);
	printf("\nQuantidade de motor: %d", carro.motor);
	
}
/*#include <stdio.h>

struct Veiculo
{
	int portas;
	int rodas;
	int motor;
};

int main(void)
{
	struct Veiculo carro;
	carro.portas = 4;
	carro.rodas = 5;
	carro.motor = 1;
	printf("Quantidade de portas: %d", carro.portas);
	printf("\nQuantidade de rodas: %d", carro.rodas);
	printf("\nQuantidade de motor: %d", carro.motor);
	
}*/
