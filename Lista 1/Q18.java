import java.util.Scanner;   
public class Q18
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Quanto tempo demorou a viagem (h):");
		float TEMPO = sc.nextFloat();
		
		System.out.println("Qual foi a velocidade média:");
		float VELOCIDADE = sc.nextFloat();
		
		float DISTANCIA = TEMPO*VELOCIDADE;
		
        float LITROS = DISTANCIA/12;
        
		System.out.println("A quantidade de litros consumidos é igual a: " + LITROS + "\nA distAncia percorrida é igual a: " + DISTANCIA + "km");
		
	}
}
