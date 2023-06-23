import java.util.Scanner;   
public class Q17
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Digite a temperatura em graus Celsius:");
		float CELSIUS = sc.nextFloat();
		
        float FAHRENHEIT = (((9*CELSIUS)+160)/5);
		System.out.println("Essa temperatura em Fahrenheit é igual a: " + FAHRENHEIT);
		
	}
}
