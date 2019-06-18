#include<stdio.h>
int main(){
	int i,j, k, mat[5][6];
	k = 1;
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if ((i % 2 == 1) && ( j % 2 == 1)){
				mat[i][j] = k;
			}else{
				mat[i][j]= 0;
			}
			k++;
		}	
	}
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("[%d][%d] = %d \t",i,j, mat[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
