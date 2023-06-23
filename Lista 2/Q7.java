import java.util.Scanner;

public class Q7 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.print("Digite um valor:");
        int NUM = ENTRADA.nextInt();
        if (NUM%3==0 && NUM%7==0){
            System.out.println("O valor é divisível por 3 e por 7");
        }
        else{
            System.out.println("O valor não é divisível por 3 e por 7");
        }
    }
}
