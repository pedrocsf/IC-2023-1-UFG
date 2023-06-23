import java.util.Scanner;
public class Q11
{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Digite o primeiro valor: ");
      float NUM1 = sc.nextFloat();
      
      System.out.print("Digite o segundo valor: ");
      float NUM2 = sc.nextFloat();
      
      System.out.println("A soma desses valores é igual a " + (NUM1+NUM2) +  "\nA subtração desses valores é igual a " + (NUM1-NUM2) + "\nA multiplicação desses valores é igual a " + (NUM1*NUM2) + "\nA divisão desses valores é igual a " + (NUM1/NUM2));
   }
}