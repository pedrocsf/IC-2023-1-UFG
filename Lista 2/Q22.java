import java.util.Scanner;

public class Q22 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite o saldo médio: ");
        float SALDO= ENTRADA.nextFloat();
        ENTRADA.close();
        System.out.println("O saldo informado é: " + SALDO);
        if(SALDO<=500){
            System.out.println("Crédito: 0");
        }
        if(SALDO>500&&SALDO<=1000){
            System.out.println("Crédito: " + SALDO*0.3);
        }
        if(SALDO>1000&&SALDO<=3000){
            System.out.println("Crédito: " + SALDO*0.4);
        }
        if(SALDO>3000){
            System.out.println("Crédito: " + SALDO*0.5);
        }
    }
}