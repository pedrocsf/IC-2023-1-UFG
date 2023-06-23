import java.util.Scanner;

public class Q10 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite um número");
        int NUM= ENTRADA.nextInt();
        ENTRADA.close();
        if(NUM==20){
            System.out.println("Igual a 20");
        }
        if(NUM>20){
            System.out.println("Maior do que 20");
        }
        if(NUM<20){
            System.out.println("Menor do que 20");
        }
    }
}
