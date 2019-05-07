#include<stdio.h>
int main(void)
{
	int i, pessoas, idade;
	printf("Informe a quantidade de pessoas: ");
	scanf("%d", &pessoas);
	i = 0;
	
	while( i < pessoas )
	{
		printf("Informe a idade %d:", i + 1);
		scanf("%d", &idade);
		i++;
	}
}
/*#include<stdio.h>
int main(void)
{
	int i, pessoas, idade;
	printf("Informe a quantidade de pessoas: ");
	scanf("%d", &pessoas);
	for(i = 0; i < pessoas; i++)
	{
		printf("Informe a idade %d:", i + 1);
		scanf("%d", &idade);
	}
}*/
