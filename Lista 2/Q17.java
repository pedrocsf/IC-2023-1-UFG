import java.util.Scanner;

public class Q17 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Qual o valor do produto: ");
        int COMPRA= ENTRADA.nextInt();
        ENTRADA.close();
        if(COMPRA<20){ 
        System.out.println("O valor de venda será de "+ ((COMPRA*0.45)/0.55+ COMPRA));
        }
        else{
        System.out.println("O valor de venda será de "+ ((COMPRA*0.30)/0.70+ COMPRA));
        }
    }
}
