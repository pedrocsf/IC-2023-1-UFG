#include<stdio.h>
int main (void){
	int VETOR[20], VETOR2[11], i=0, j=0,z=0;
	for (z=0;z<20;z++){
		VETOR2[z]=0;
	}
	for(i=0; i<20; i++){
		printf("Digite um valor inteiro entre 0-10 para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	  	for(j=0;j<20;j++){
	  		if(VETOR[i]==VETOR[j]){
	  			VETOR2[VETOR[i]] = VETOR2[VETOR[i]]+1;
			}
		}
	}

	return 0;
}
