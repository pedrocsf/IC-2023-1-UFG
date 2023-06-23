import java.util.Scanner;

public class App {
    public static void main(String[] args) {
      System.out.println("Calculadora de equações do segundo grau (ax² + bx + c = 0)");
      System.out.println("");

      Scanner ENTRADA = new Scanner(System.in);
      System.out.print("Digite o valor do coeficiente A:");
      int VALOR_A = ENTRADA.nextInt();
      System.out.print("Digite o valor do coeficiente B:");
      int VALOR_B = ENTRADA.nextInt();
      System.out.print("Digite o valor do coeficiente C:");
      int VALOR_C = ENTRADA.nextInt();
      ENTRADA.close();
      System.out.println("");
      
      double DELTA = (((Math.pow(VALOR_B,2))-4*VALOR_A*VALOR_C));

      if (DELTA>0 || DELTA==0){
        double RAIZ1 = (((VALOR_B*-1)+Math.sqrt(DELTA))/2*VALOR_A);
        double RAIZ2 = (((VALOR_B*-1)-Math.sqrt(DELTA))/2*VALOR_A);
        System.out.println("Os coeficientes geredos resultam no delta igual a: " + DELTA);
        System.out.println("Portanto, suas raízes são: " + RAIZ1 + " e " +  RAIZ2);
        }
        else{
          System.out.println("Os coeficientes geredos resultam num delta negativo, portanto, suas raízes reais não existem.");
          }
}
}