import java.util.Scanner;
public class Q6 {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Digite um número inteiro: ");
      int num1 = sc.nextInt();
      int num0 = (num1-1);
      int num2 = (num1+1);
      System.out.println("O número digitado foi: " + num1);
      System.out.println("O antecessor desse número é: " + num0);
      System.out.println("O sucessor desse número é: " + num2);
   }
}