#include <stdio.h>

int main(void) {
	char NOME[100];
	int SALARIO, i;
	for(i=1; i<=5; i=i+1) {
		printf("Digite o nome da pessoa:\n");
		fgets(NOME, sizeof(NOME), stdin); 

		printf("Digite seu salário:\n");
		scanf("%d", &SALARIO);
		getchar(); 

		if (SALARIO < 1300) {
			printf("NOME: %sVALOR DA ALÍQUOTA: ISENTO\n", NOME);
		}

		if (SALARIO >= 1300 && SALARIO < 2300) {
			int ALIQUOTA = SALARIO * 0.1;
			printf("NOME: %sVALOR DA ALÍQUOTA: %d (10%%)\n", NOME, ALIQUOTA);
		}

		if (SALARIO >= 2300) {
			int ALIQUOTA = SALARIO * 0.15;
			printf("NOME: %sVALOR DA ALÍQUOTA: %d (15%%)\n", NOME, ALIQUOTA);
		}
	}
	return 0;
}

