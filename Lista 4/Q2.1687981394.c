#include<stdio.h>
int main (void){
	int VETOR[10], X, i=0, j=0, z=0;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	}
	
	printf("Digite um valor e confira se ele � maior ou menor que os valores do vetor em quest�o:");
		scanf("%d", &X);
		
	for(j=0; j<10; j++){
		if(X>VETOR[j]){
			VETOR[j]=0;
		}
		if(X<VETOR[j]){
			VETOR[j]=1;
		}
		if(X==VETOR[j]){
			VETOR[j]=2;
		}
	}
	printf("Compara��o de X com os valores do vetor em quest�o, sendo 0 indicando valor menor que X, 1 indicando valor maior que X e 2 indicando que os valores s�o iguais:\n");
	for(z=0; z<10; z++){
		printf("%d\n",VETOR[z]);
	}
	
	return 0;
}

