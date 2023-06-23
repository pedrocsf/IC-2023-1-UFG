#include <stdio.h>
int main(void) {
  int NUM, FATORIAL, TOTAL;

  printf("Digite um valor: ");
  scanf("%d", &NUM);

  FATORIAL = 1;
  TOTAL = 1;
  while (NUM > 1) {
    FATORIAL = FATORIAL * NUM;
    NUM=NUM-1;
  }
  TOTAL = FATORIAL;
  printf("O fatorial desse número é: %d\n", TOTAL);
  return 0;
}