#include <stdio.h>

int main(void) {
	char NOME[20];
	int MATRIZ[5][4];
	int i,j;
	
	for(i=0;i<5;i++){
			printf("Digite o nome da manicure:");
			scanf("%s", &NOME[i]);
			
			printf("Digite a quantidade de servi�os executados nos p�s:");
			scanf("%d", &MATRIZ[i][0]);
			
			printf("Digite a quantidade de servi�os executados nas m�os:");
			scanf("%d", &MATRIZ[i][1]);
			
			printf("Digite a quantidade de servi�os de podologia:");
			scanf("%d", &MATRIZ[i][2]);
	}
	
	for(i=0;i<5;i++){
		MATRIZ[i][3]= ((MATRIZ[i][0]*10)/2) + ((MATRIZ[i][1]*15)/2) + ((MATRIZ[i][2]*30)/2);
	}
	
	printf("Sal�rio individual:\n");
	
	for(i=0;i<5;i++){
	 printf("Manicure %d: %d \n", i+1, MATRIZ[i][3]);
	}
	
    return 0;
}
