import java.util.Scanner;   
public class Q15
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Digite o valor do produto:");
		float VALOR = sc.nextFloat();
		
		System.out.println("Digite o valor de desconto (%):");
		float DESCONTO = sc.nextFloat();
		
		float DESCREAL = DESCONTO/100;
		
		System.out.println("O valor final do produto será de: " + (VALOR-(VALOR*DESCREAL)));
		
	}
}
