#include <stdio.h>
int main(void){
int i, RENDA_PESSOAL, RENDA_FAMILIAR, ALIMENTACAO, OUTROS, CONT0=0, CONT1=0, CONT2=0, P1=0, P2=0, SOMA1=0, SOMA2=0;
do{
	CONT0=CONT0+1;
	printf("Digite a renda pessoal do aluno(a):");
	scanf("%d", &RENDA_PESSOAL);
	
	printf("Digite a renda familiar do aluno(a):");
	scanf("%d", &RENDA_FAMILIAR);
	if(RENDA_PESSOAL>RENDA_FAMILIAR){
		CONT2=CONT2+1;
	}
	printf("Digite o total gasto com alimentação pelo(a) aluno(a):");
	scanf("%d", &ALIMENTACAO);
	
	printf("Digite o total gasto com outras despesas pelo(a) aluno(a):");
	scanf("%d", &OUTROS);
	if(OUTROS>200){
		CONT1=CONT1+1;
	}

	SOMA1=RENDA_PESSOAL+RENDA_FAMILIAR+SOMA1;
	SOMA2=ALIMENTACAO+OUTROS+SOMA2;
	
	printf("Deseja inserir dados de outro aluno(a)?\n1 Sim\n 2Não");
	scanf("%d", &i);
}
while(i==1);

P1=(CONT1/CONT0)*100;
P2=((SOMA2/(SOMA1+SOMA2))*100);
printf("Porcentagem dos alunos que gasta acima de R$200,00 com outras despesas: %d\n", P1);
printf("Número de alunos com renda pessoal maior que a renda familiar: %d\n", CONT2);
printf("Porcentagem gasta com alimentação e outras despesas em relação às rendas pessoal e familiar: %d", P2);
return 0;
}
