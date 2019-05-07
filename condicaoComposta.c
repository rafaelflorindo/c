#include<stdio.h>
int main(){
	int num1, num2, x;
	printf("Informe o num 1: ");
	scanf("%d", &num1);
	printf("Informe o num 2: ");
	scanf("%d", &num2);
	x = num1 + num2;
	if (x >=10) {
		printf ("X = %d", x + 5);
	}else{
		printf ("X = %d", x - 7);
	}
	return 0;
}
