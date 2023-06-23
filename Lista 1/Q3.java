import java.text.DecimalFormat; //Sem essa biblioteca, a saída de valores seria dada sem expressar o valor decimal
public class Q3
{
	public static void main(String[] args) {
	   float media = ((5+8+12)/3f);
	    DecimalFormat df = new DecimalFormat("#.000");
		System.out.println("A média aritmética entre os números 5, 8 e 12 é igual a " + df.format(media) + ".");
	}
}