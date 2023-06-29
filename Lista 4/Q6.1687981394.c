#include <stdio.h>
int main(void){
	int N, i=0, SOMA=0;
	printf("Digite o tamanho do vetor:");
		scanf("%d", &N);
	
	int VETOR[N];
	
	for(i=0; i<N; i++){
		printf("Digite um valor para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	  	SOMA=SOMA+VETOR[i];
	}
	
	
	
	printf("A soma total dos valores inseridos é de %d", SOMA);
	
	return 0;
}
