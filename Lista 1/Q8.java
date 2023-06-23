import java.util.Scanner;
public class Q8 
{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Digite o primeiro valor: ");
      int NUM1 = sc.nextInt();
      
      System.out.print("Digite o segundo valor: ");
      int NUM2 = sc.nextInt();
      
      System.out.println("A subtração desses valores resulta em: " + (NUM1-NUM2));
   }
}