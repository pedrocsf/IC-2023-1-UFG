import java.util.Scanner;
public class Q13
{
	public static void main(String[] args) {
	  Scanner sc = new Scanner(System.in);
      System.out.print("Digite seu saldo anterior: ");
      float SALDO = sc.nextFloat();
      System.out.print("O novo saldo será de: " + SALDO*1.02);
	}
}
