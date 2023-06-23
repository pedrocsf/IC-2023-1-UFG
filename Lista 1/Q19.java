import java.util.Scanner;   
public class Q19
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Qual o valor da prestação atrasada?");
		float VALOR = sc.nextFloat();
		
		System.out.println("Qual a taxa periódica de juros (%)?");
		float JUROS = sc.nextFloat();
        float JUROS_REAIS = JUROS/100;

		System.out.println("Qual o período de atraso (meses)?");
		float PERIODO = sc.nextFloat();
		
		float VALOR_FINAL = (VALOR + (VALOR*PERIODO*JUROS_REAIS));
		
		System.out.println("O valor da prestação acrescida dos juros será de " + VALOR_FINAL);
	}
}
