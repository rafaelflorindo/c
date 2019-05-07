#include<stdio.h>

int main(void)
{
	float number[50];
	int i;
	for (i=0; i<50; i++)
		number[i] = i+1;

	for (i=0; i<50; i++)
		printf ("\n[%d] = %f", i, number[i]);
	
}
