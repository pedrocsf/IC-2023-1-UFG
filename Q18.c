#include <stdio.h>
int main(void){
int IDADE, MENOR_DE_21=0, MAIOR_DE_50=0, CONT=0;
do{
	printf("Digite a idade da pessoa:\n");
	scanf("%d", &IDADE);
	
	if(IDADE<21){
		MENOR_DE_21=MENOR_DE_21+1;
	}
	
	if(IDADE>50){
		MAIOR_DE_50=MAIOR_DE_50+1;
	}

	printf("Deseja inserir outra idade:\n0 Sim\n1 Não");
	scanf("%d", &CONT);
}
while(CONT!=1);

printf("Total de pessoas com menos de 21 anos: %d\n", MENOR_DE_21);
printf("Total de pessoas com mais de 50 anos: %d\n", MAIOR_DE_50);

	return 0;
}
