import java.util.Scanner;
public class Q9 
{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Digite um número real: ");
      float NUM = sc.nextFloat();
      
      System.out.println("1/4 desse valor equivale a: " + (NUM/4));
   }
}