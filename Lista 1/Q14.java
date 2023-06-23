import java.util.Scanner;   
public class Q14
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Digite o valor da altura do retângulo:");
		float ALTURA = sc.nextFloat();
		
		System.out.println("Digite o valor da base do retângulo:");
		float BASE = sc.nextFloat();
		
		System.out.println("O perímetro desse retângulo é de " + ((BASE*2)+(ALTURA*2)) + "\nA área desse retângulo é de " + (BASE*ALTURA));
		
	}
}
