#include <stdio.h>

int main(void) {
  int NUM, CONT;
  printf("Digite um valor: ");
  scanf("%d", &NUM);

  printf("Os números pares de 0 até esse valor são: \n");
  
  for(CONT=0;CONT<=NUM;CONT=CONT+2){
    printf("%d\n", CONT);
  }

  
  return 0;
}