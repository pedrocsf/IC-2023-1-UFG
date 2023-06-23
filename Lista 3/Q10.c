#include <stdio.h>
int main(void) {
  int NUM_ENTRADA, i, j, NUM_INICIAL=1;
  
    printf("Digite um número inteiro:");

    scanf("%d", &NUM_ENTRADA);
    
    for (i=1;i<=NUM_ENTRADA;i=i+1){
        
        for(j=1;j<=NUM_ENTRADA;j=j+1){
           printf("%d", NUM_INICIAL);
           NUM_INICIAL=NUM_INICIAL+1;
           }
        
        printf("\n");
    }
  return 0;
}