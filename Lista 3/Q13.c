#include <stdio.h>

int main(void) {
	int i, IDADE, OPINIAO, MEDIA_IDADE = 0, QTD_REGULAR = 0, PORCENT_BOM = 0;

	for (i = 1; i <= 8 i++) {
		printf("Digite sua idade:\n");
		scanf("%d", &IDADE);

		printf("Digite a opinião:\n 1 Regular\n 2 Bom\n 3 Excelente\n");
		scanf("%d", &OPINIAO);

		MEDIA_IDADE = MEDIA_IDADE + IDADE;

		if (OPINIAO == 1) {
			QTD_REGULAR = QTD_REGULAR + 1;
		} else if (OPINIAO == 2) {
			PORCENT_BOM = PORCENT_BOM + 1;
		}
	}

	MEDIA_IDADE = MEDIA_IDADE / 8
	PORCENT_BOM = (PORCENT_BOM * 100) / 8

	printf("Média de idade: %d\nQuantidade de regular: %d\nPorcentagem de bom: %d%%\n", MEDIA_IDADE, QTD_REGULAR, PORCENT_BOM);
	return 0;
}

