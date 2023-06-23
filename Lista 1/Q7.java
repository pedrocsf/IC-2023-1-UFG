import java.util.Scanner;
public class Q7 
{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Digite seu nome: ");
      String NOME = sc.nextLine();
      
      System.out.print("Digite seu endereço: ");
      String END = sc.nextLine();
      
      System.out.print("Digite seu número de telefone: ");
      String NUM = sc.nextLine();
      
      System.out.println("\nEsses foram os dados digitados:\n" + "Nome - " + NOME + "\nEndereço - " + END + "\nNúmero de telefone - " + NUM);
   }
}

