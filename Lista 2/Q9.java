import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.print("Digite um número:");
        int NUM= ENTRADA.nextInt();
        ENTRADA.close();
        if(NUM>=20 && NUM<=50){
            System.out.println("O número está no intervalo de [20,50]");
        }
        else{
            System.out.println("O número não está no intervalo de [20,50]");
        }
    }
}
