#include <stdio.h>
    int main(void) {
    int NUM, CONT=1, i, VALOR_DESEJADO=0;
      printf("Digite quantos n�meros voc� quer inserir?\n");
      scanf("%d", &i);
      do{
        printf("Digite um n�mero:\n");
      scanf("%d", &NUM);
		 CONT=CONT+1;
        if(NUM>=100&&NUM<=200){
          VALOR_DESEJADO=VALOR_DESEJADO+1;
        }
        if(NUM==0){
		CONT=i;
		}
      }
      while(CONT<=i);
    printf("O n�mero total de valores digitados que est�o entre 100 e 200 � de %d", VALOR_DESEJADO);
  return 0;
}
