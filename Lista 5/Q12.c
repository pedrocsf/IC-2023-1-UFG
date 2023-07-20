#include <stdio.h>

int main (void){
	int ALTURA[6];
	char NOME[20];
	int i;
	
	for(i=0;i<6;i++){
		printf("Digite o nome do atleta:");
		fgets(NOME, 20, stdin);
	
		printf("Digite a altura do atleta:");
		scanf("%d", &ALTURA[i]);
		
		getchar();
	}
	
	if(ALTURA[0]>ALTURA[1]){
		printf("Nome do maior atleta: %s\nAltura do maior atleta: %d\n", NOME, ALTURA[0]);	
	}
	if(ALTURA[0]<ALTURA[1]){
		printf("Nome do maior atleta: %s\nAltura do maior atleta: %d\n", NOME, ALTURA[1]);
	}
	if(ALTURA[0]==ALTURA[1]){
		printf("Os atletas tem a mesma altura.\n");
	}
	
	if(ALTURA[2]>ALTURA[3]){
		printf("Nome do maior atleta: %s\nAltura do maior atleta: %d\n", NOME, ALTURA[2]);	
	}
	if(ALTURA[2]<ALTURA[3]){
		printf("Nome do maior atleta: %s\nAltura do maior atleta: %d\n", NOME, ALTURA[3]);
	}
	if(ALTURA[2]==ALTURA[3]){
		printf("Os atletas tem a mesma altura.\n");
	}
	
	if(ALTURA[4]>ALTURA[5]){
		printf("Nome do maior atleta: %s\nAltura do maior atleta: %d\n", NOME, ALTURA[4]);	
	}
	if(ALTURA[4]<ALTURA[5]){
		printf("Nome do maior atleta: %s\nAltura do maior atleta: %d\n", NOME, ALTURA[5]);
	}
	if(ALTURA[4]==ALTURA[5]){
		printf("Os atletas tem a mesma altura.\n");
	}
	
	
	return 0;
}
