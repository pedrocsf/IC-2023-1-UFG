#include <stdio.h>
int main(void){
	int N, i=0;
	printf("Digite o tamanho do vetor:");
		scanf("%d", &N);
		
	int VETOR [N], j=N;
	
	for(i=0; i<N; i++){
		printf("Digite um valor para ser alocado dentro do vetor:");
	  		scanf("%d", &VETOR[i]);
	}
	
	printf("Valores digitados (na ordem inversa de inserção):\n");
	
	for(j=N-1;j>=0;j--){
		printf("%d\n", VETOR[j]);
	}
	return 0;
}
