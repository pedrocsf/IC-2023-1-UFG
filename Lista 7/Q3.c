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
 		printf("Endere�o do valor na posi��o %d do vetor: %x \n", i, p);
	}
	printf("Obs.: Os endere�os foram impressos na sua forma hexadecimal");
	return 0;
}
