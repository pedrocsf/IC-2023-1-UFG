#include <stdio.h>
int main(){
	int X,Y;
	printf("Digite o valor da vari�vel X:");
	scanf("%d", &X);
	
	printf("Digite o valor da vari�vel Y:");
	scanf("%d", &Y);
	
	int *p1 = &X;
	int *p2 = &Y;
	
	if (p1 > p2) {
        printf("O endere�o de X � maior que o de Y\n");
    } else if (p1 < p2) {
        printf("O endere�o de Y � maior que o de X\n");
    } else {
        printf("Os endere�os de X e Y s�o iguais\n");
    }
	return 0;
}
