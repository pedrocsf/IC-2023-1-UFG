#include <stdio.h>
    int main(void) {
    int CONT=2, NUM=0, NUM1=0, NUM2=1;
    printf("%d\n", NUM1);
    printf("%d\n", NUM2);
    NUM=NUM1+NUM2;
    while(CONT<=9){
      printf("%d\n", NUM);
    NUM1=NUM2;
    NUM2=NUM;
    NUM=NUM1+NUM2;
    CONT=CONT+1;
}
    
  return 0;
}
