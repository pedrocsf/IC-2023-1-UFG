#include <stdio.h>
int main(void) {
int i, IDADE1, IDADE2, IDADE3, PESO1, PESO2, PESO3, IDADE_MEDIA=0, PESO_MEDIO=0, IDADE_TOTAL=0, PESO_TOTAL=0;

	for(i=1;i<=5;i=i+1){
		printf("CIDADE %d:\n", i);
		printf("Digite a idade do primeiro competidor:");
		scanf("%d", &IDADE1);
		printf("Digite o peso do primeiro competidor:");
		scanf("%d", &PESO1);
		
		printf("Digite a idade do segundo competidor:");
		scanf("%d", &IDADE2);
		printf("Digite o peso do segundo competidor:");
		scanf("%d", &PESO2);
		
		printf("Digite a idade do terceiro competidor:");
		scanf("%d", &IDADE3);
		printf("Digite o peso do terceiro competidor:");
		scanf("%d", &PESO3);
		
		PESO_MEDIO = (PESO1+PESO2+PESO3)/3;
		printf("Peso médio dos competidores da cidade %d: %d\n", i, PESO_MEDIO);
		
		IDADE_MEDIA= (IDADE1+IDADE2+IDADE3)/3;
		printf("Idade média dos competidores da cidade %d: %d\n", i, IDADE_MEDIA);
		
		if (PESO1 >= PESO2 && PESO1 >= PESO3) {
        printf("O competidor 1 é o mais pesado\n");
    	} else if (PESO2 >= PESO1 && PESO2 >= PESO3) {
        printf("O competidor 2 é o mais pesado\n");
    	} else {
        printf("O competidor 3 é o mais pesado\n");
    	}
    	
    	if (IDADE1 <= IDADE2 && IDADE1 <= IDADE3) {
        printf("O competidor 1 é o mais jovem\n");
    	} else if (IDADE2 <= IDADE3 && IDADE2 <= IDADE3) {
        printf("O competidor 2 é o mais jovem\n");
    	} else {
        printf("O competidor 3 é o mais jovem\n");
    	}
    	PESO_TOTAL=PESO_TOTAL+PESO1+PESO2+PESO3;
    	IDADE_TOTAL=IDADE1+IDADE2+IDADE3;
	}
	PESO_MEDIO = PESO_TOTAL/15;
	IDADE_MEDIA = IDADE_TOTAL/15;
	printf("Peso médio de todos os participantes: %d\nIdade média de todos os participantes: %d", PESO_MEDIO, IDADE_MEDIA);
return 0;
}
