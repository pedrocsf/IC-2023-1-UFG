import java.util.Scanner;

public class Q14 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite a idade da pessoa:");
        int IDADE= ENTRADA.nextInt();
        ENTRADA.close();
        
    if(IDADE>=18){
        if(IDADE>=65){
            System.out.println("É maior de idade e é maior de 65 anos.");
        }
        else{
            System.out.println("É maior de idade.");
        }
    }
    else{
        System.out.println("É menor de idade");
    }
    }
}