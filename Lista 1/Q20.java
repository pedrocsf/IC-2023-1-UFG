import java.util.Scanner;   
public class Q20
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Digite o valor da cotação atual do dolar (R$):");
		float REAL = sc.nextFloat();
		
		System.out.println("Digite o valor em dolares para transformação:");
		float DOLAR = sc.nextFloat();
		
        float CONVERTIDO = DOLAR*REAL;
		System.out.println("O valor em dolar digitado é igual a: " + CONVERTIDO + " reais.");
		
	}
}

