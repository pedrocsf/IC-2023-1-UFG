#include <stdio.h>
#include <math.h>
float LADO;

float def_AREA(float LADO){
	float DEF1=pow(LADO, 2);
	return DEF1;
}

float def_PERIMETRO(float LADO){
	float DEF2=LADO*4;
	return DEF2;
}

float def_DIAGONAL(float LADO){
	float DEF3=sqrt((pow(LADO,2))*2);
	return DEF3;
}

int main(){
	printf("Digite o valor do lado do quadrado:");
		scanf("%f", &LADO);
		
	float AREA = def_AREA(LADO);
	float PERIMETRO = def_PERIMETRO(LADO);
	float DIAGONAL = def_DIAGONAL(LADO);
	
	printf("Valor da área: %.2f\nValor do perímetro: %.2f\nValor da diagonal:%.2f", AREA, PERIMETRO, DIAGONAL);
	return 0;
}
