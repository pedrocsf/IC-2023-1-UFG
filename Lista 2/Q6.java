import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.print("Digite um número:");
        int NUM= ENTRADA.nextInt();
        ENTRADA.close();
        if (NUM%5==0){
            System.out.print("O número é divisível por 5");
        }
        else{
            System.out.print("O número não é divisível por 5");
        }
    }
}
