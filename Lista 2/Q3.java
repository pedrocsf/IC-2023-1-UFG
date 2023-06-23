import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
     Scanner ENTRADA = new Scanner(System.in);
     System.out.println("Digite o primeiro valor:");
     int NUM1 = ENTRADA.nextInt();
     System.out.println("Digite o segundo valor:");
     int NUM2 = ENTRADA.nextInt();
     ENTRADA.close();
     int SOMA = (NUM1+NUM2);
     if (SOMA>10){
     System.out.println("O valor somado é igual a: " + SOMA + ".");
     }
     else{
     System.out.println("O valor somado é igual ou inferior a 10.");
     }
}
}
