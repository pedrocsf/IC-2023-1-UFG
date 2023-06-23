#include <stdio.h>
int main(void){
  int PAIS_A = 5000000, PAIS_B=7000000, CONT=0;
  float CRESC_A=1.03, CRESC_B=1.02;
  while(PAIS_A<PAIS_B){
    PAIS_A=PAIS_A*CRESC_A;
    PAIS_B=PAIS_B*CRESC_B;
    CONT=CONT+1;
  }
   if(PAIS_A>PAIS_B){
      printf("O país A demorará %d anos para ultrapassar a população do País B", CONT);
   }
  return 0;
}
