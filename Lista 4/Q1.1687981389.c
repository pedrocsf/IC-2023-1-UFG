#include <stdio.h>
int main (void){
	int VETOR[10], NUM, i=0, j=0;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	}
	
	printf("Digite um valor e confira se ele faz parte do vetor anteriormente criado:");
		scanf("%d", &NUM);
		
	for(j=0; j<9; j++){
		if(NUM==VETOR[j]){
			printf("O valor faz parte do vetor.");
			break;
		}
		else if (NUM!=VETOR[9]){
			printf("O valor não faz parte do vetor.");
			break;
		}
		else{
			continue;
		}
	}
	return 0;
}
