import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
     Scanner ENTRADA = new Scanner(System.in);
     System.out.println("Digite o primeiro valor:");
     int NUM1 = ENTRADA.nextInt();
     System.out.println("Digite o segundo valor:");
     int NUM2 = ENTRADA.nextInt();
     int SOMA = (NUM1+NUM2);
     ENTRADA.close();
     if (SOMA>20){
     System.out.println("O valor final é " + (SOMA+8));
     }
     else{
     System.out.println("O valor final é " + (SOMA-5));
     }
}
}
