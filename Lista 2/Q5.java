import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite um valor:");
        int NUM= ENTRADA.nextInt();
        ENTRADA.close();
        if (NUM%3==0){
        System.out.println("É múltiplo de 3");
        }
        else{
        System.out.println("Não é múltiplo de 3");
        }
    }
}
