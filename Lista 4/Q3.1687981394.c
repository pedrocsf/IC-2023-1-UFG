#include<stdio.h>
int main(void){
	int N, K, CONT=0, i=0, j=0;
	printf("Digite o tamanho do vetor:");
		scanf("%d", &N);
		
	int VETOR [N];
	
	for(i=0; i<N; i++){
		printf("Digite um valor para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	}
	printf("Digite um valor para ser comparado com os valores do vetor:");
		scanf("%d",&K);
	
	for(j=0; j<N; j++){
		if(VETOR[j]>=K){
			CONT=CONT+1;
		}
	}
	
	if(CONT==0){
		printf("Não existem valores maiores ou iguais a %d nesse vetor.");
	}
	else{
		printf("Quantidade de valores maiores ou iguais a %d: %d", K, CONT);
	}	
	return 0;
}
