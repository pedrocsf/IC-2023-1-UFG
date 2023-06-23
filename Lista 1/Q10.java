import java.util.Scanner;
public class Q10 
{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Digite o primeiro valor: ");
      float NUM1 = sc.nextFloat();
      
      System.out.print("Digite o segundo valor: ");
      float NUM2 = sc.nextFloat();
      
      System.out.print("Digite o terceiro valor: ");
      float NUM3 = sc.nextFloat();
      
      System.out.println("A média aritmética desses valores é igual a: " + ((NUM1+NUM2+NUM3)/3));
   }
}