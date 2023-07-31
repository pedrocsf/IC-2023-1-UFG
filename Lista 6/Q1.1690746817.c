#include <stdio.h>

int def (int NUM1){
	int	NUM2=NUM1*2;
	return NUM2;
}
int main (){
	int i=0, VETOR[3], NUM1;
	for(i=0;i<3;i++){
 		printf("Digite um número:");
 		scanf("%d", &NUM1);
		VETOR[i]=def(NUM1);
	}
	for(i=0;i<3;i++){
		printf("%d ", VETOR[i]);
	}
	return 0;
}
