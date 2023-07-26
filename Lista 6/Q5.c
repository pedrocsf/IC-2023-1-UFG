#include <stdio.h>
#include <math.h>
float def_AREA(float VETOR[]);
float def_PERIMETRO(float VETOR[]);
float def_DIAGONAL(float VETOR[]);
float VETOR[2];

int main(){
	printf("Digite o valor da base:");
		scanf("%f", &VETOR[0]);
	printf("Digite o valor da altura:");
		scanf("%f", &VETOR[1]);
		
	float AREA = def_AREA(VETOR);
	float PERIMETRO = def_PERIMETRO(VETOR);
	float DIAGONAL = def_DIAGONAL(VETOR);
	
	printf("Valor da área: %.2f\nValor do perímetro: %.2f\nValor da diagonal:%.2f", AREA, PERIMETRO, DIAGONAL);
	return 0;
}

float def_AREA(float VETOR[]){
	float DEF1=(VETOR[0]*VETOR[1])/2.0;
	return DEF1;
}

float def_PERIMETRO(float VETOR[]){
	float DEF2=VETOR[0]+VETOR[1]+def_DIAGONAL(VETOR);
	return DEF2;
}

float def_DIAGONAL(float VETOR[]){
	float DEF3=sqrt(pow(VETOR[0],2)+pow(VETOR[1],2));
	return DEF3;
}


