import java.util.Scanner;

public class Q11 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.print("Digite o ano de nascimento: ");
        int NASCIMENTO= ENTRADA.nextInt();
        System.out.print("Digite o ano atual: ");
        int ATUAL= ENTRADA.nextInt();
        ENTRADA.close();
        int IDADE = ATUAL-NASCIMENTO;
        if(IDADE<122){ //122 é a idade da pessoa mais velha da história que se tem registro até então. 
            System.out.println("A idade dessa pessoa é de " + IDADE +" anos.");
        }
        else{
            System.out.println("O valores inseridos provavelmente estão errados, caso contrário, essa pessoa teria " + IDADE + " anos de idade.");
        }
    }
}
