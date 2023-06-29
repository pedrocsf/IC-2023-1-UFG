#include <stdio.h>
int main(void){
	int VETOR[10], i=0, MAIOR=0, MAIOR_I=-1;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	  	if(VETOR[i]>MAIOR){
	  		MAIOR=VETOR[i];
	  		MAIOR_I=i;
		}
	}
	
	printf("O maior valor é %d com índice %d", MAIOR, MAIOR_I);
	
	return 0;
}
