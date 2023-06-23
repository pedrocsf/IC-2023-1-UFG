#include <stdio.h>
int main(void) {
  int NUM;
  printf("Digite um número:\n");
  scanf("%d", &NUM);
  if(NUM<=10){
    switch (NUM)
    {
    case 1:
      printf("O número é primo.");
      break;
    case 2:
      printf("O número é primo.");
      break;
    case 3:
      printf("O número é primo.");
      break;
    case 4:
      printf("O número não é primo.");
      break;
    case 5:
      printf("O número é primo.");
      break;
    case 6:
      printf("O número não é primo.");
      break;
    case 7:
      printf("O número é primo.");
      break;
    case 8:
      printf("O número não é primo.");
      break;
    case 9:
      printf("O número não é primo.");
      break;
    case 10:
      printf("O número não é primo.");
      break;
    default:
      break;
    }
  }
  else{
    if(NUM%10==0||NUM%9==0||NUM%8==0||NUM%7==0||NUM%6==0||NUM%5==0||NUM%4==0||NUM%3==0||NUM%2==0){
      printf("O número não é primo.");
    }
    else{
    printf("O número é primo.");
    }
  }
  return 0;
}
