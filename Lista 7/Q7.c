#include <stdio.h>

int DEF(int *p)
{
	int j;
	int def;
    int FATORIAL = 1;
    while (*p > 1) {
        FATORIAL = FATORIAL * *p;
        *p=*p-1;
    }

    def = FATORIAL;

    return def;
}

int main()
{
	int i;
	int VETOR[10];
    int FATORIAL[10];

    for (i = 0; i < 10; i++){
        printf("Digite um valor inteiro:");
        scanf("%d", &VETOR[i]);
    }

    for (i = 0; i < 10; i++){
        FATORIAL[i]= DEF(&VETOR[i]);
    }

	for (i = 0; i < 10; i++){
        printf("%d\n", FATORIAL[i]);
    }
    return 0;
}
