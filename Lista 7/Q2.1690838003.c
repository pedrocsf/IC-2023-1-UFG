#include <stdio.h>
int main(){
	int X,Y;
	printf("Digite o valor da variável X:");
	scanf("%d", &X);
	
	printf("Digite o valor da variável Y:");
	scanf("%d", &Y);
	
	int *p1 = &X;
	int *p2 = &Y;
	
	if (p1 > p2) {
        printf("O endereço de X é maior que o de Y\n");
    } else if (p1 < p2) {
        printf("O endereço de Y é maior que o de X\n");
    } else {
        printf("Os endereços de X e Y são iguais\n");
    }
	return 0;
}
