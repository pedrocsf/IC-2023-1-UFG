import java.util.Scanner;   
public class Q16
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Digite o valor do salário anterior:");
		float SALARIO = sc.nextFloat();
		
		System.out.println("Digite o valor de reajuste (%):");
		float REAJUSTE = sc.nextFloat();
		
		float REAJUSTE_REAL = REAJUSTE/100;
		
		System.out.println("O novo salário será de: " + (SALARIO+(SALARIO*REAJUSTE_REAL)));
		
	}
}
