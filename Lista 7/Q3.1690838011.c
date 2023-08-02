#include <stdio.h>
int main(){
	float VETOR[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite um valor:");
		scanf("%f", &VETOR[i]);
	}
	float *p;
	
	for(i=0;i<10;i++){
		p = &VETOR[i];
 		printf("Endereço do valor na posição %d do vetor: %x \n", i, p);
	}
	printf("Obs.: Os endereços foram impressos na sua forma hexadecimal");
	return 0;
}
