#include <stdio.h>

int main(){
	int VETOR[5];
	int *p,i;
 	for(i=0;i<5;i++){
		p=&VETOR[i];
		printf("Digite um valor:");
		scanf("%d", p);
	}
	for(i=0;i<5;i++){
		VETOR[i]=VETOR[i]*2;
		printf("%d\n", VETOR[i]);
	}
	return 0;
}
