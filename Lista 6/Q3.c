#include <stdio.h>

#include <stdbool.h>

int i;
int def(int NUM) {
   bool PRIMO;
   if (NUM <= 1) {
      return false;
   }
   for (i = 2; i < NUM; i++) {
      if (NUM % i == 0) {
         return false;
      }
   }

   return true;
}

int main() {
   int NUM;
   printf("Digite um número:");
   scanf("%d", & NUM);

   if (def(NUM)) {
      printf("O número é primo");
   } else {
      printf("O número não é primo");
   }
   return 0;
}
