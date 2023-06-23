#include <stdio.h>

int main(void) {
  int NUM1, NUM2, CONT;
  printf("Digite um valor: ");
  scanf("%d", &NUM1);
  printf("Digite até qual valor você deseja saber a tabuada: ");
  scanf("%d", &NUM2);
  CONT = 1;
  printf("A tabuada desse número é: \n");
  while(CONT <= NUM2) {
    int OPERACAO = NUM1 * CONT;
    printf("%d \n", OPERACAO);
    CONT = CONT + 1;
  }
  
  return 0;
}