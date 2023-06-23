import java.util.Scanner;

public class Q13 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.print("Digite o primeiro número:");
        int NUM1= ENTRADA.nextInt();
        System.out.print("Digite o segundo número:");
        int NUM2= ENTRADA.nextInt();
        System.out.print("Digite o terceiro número:");
        int NUM3= ENTRADA.nextInt();
        ENTRADA.close();
        
        int MAIOR_PROVAVEL;
        int MENOR_PROVAVEL;

        if(NUM1>NUM2){
        MAIOR_PROVAVEL = NUM1;
        MENOR_PROVAVEL = NUM2;
        }
        else{
        MAIOR_PROVAVEL = NUM2;
        MENOR_PROVAVEL = NUM1;
        }

        if (NUM3>MAIOR_PROVAVEL){
        System.out.println("O maior valor é: " +  NUM3);
        }
        else{
            if(NUM3>MENOR_PROVAVEL){
                System.out.println("O maior valor é: " + MAIOR_PROVAVEL);
            }
            else{
                System.out.println("O maior valor é: " + MAIOR_PROVAVEL);
            }
        }
    }
}