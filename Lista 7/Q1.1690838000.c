#include <stdio.h>

int BASE, ALTURA;
int def(int BASE, int ALTURA){
	int DEF = (BASE*ALTURA)/2;
	return DEF;
}
int main(){
	printf("Digite o valor da base:");
	scanf("%d",&BASE);
	
	printf("Digite o valor da altura:");
	scanf("%d", &ALTURA);
	
	int AREA=def(BASE, ALTURA);
	
	printf("Valor da área: %d", AREA);
	
	return 0;
}
