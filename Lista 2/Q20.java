import java.util.Scanner;

public class Q20 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite um número inteiro entre 1 e 12: ");
        int NUMERO= ENTRADA.nextInt();
        ENTRADA.close();
        switch(NUMERO){
            case 1:
                System.out.println("O mês correspondente é Janeiro");
                break;
            case 2:
                System.out.println("O mês correspondente é Fevereiro");
                break;
            case 3:
                System.out.println("O mês correspondente é Março");
                break;
            case 4:
                System.out.println("O mês correspondente é Abril");
                break;
            case 5:
                System.out.println("O mês correspondente é Maio");
                break;
            case 6:
                System.out.println("O mês correspondente é Junho");
                break;
            case 7:
                System.out.println("O mês correspondente é Julho");
                break;
            case 8:
                System.out.println("O mês correspondente é Agosto");
                break;
            case 9:
                System.out.println("O mês correspondente é Setembro");
                break;
            case 10:
                System.out.println("O mês correspondente é Outubro");
                break;
            case 11:
                System.out.println("O mês correspondente é Novembro");
                break;
            case 12:
                System.out.println("O mês correspondente é Dezembro");
                break;
            default:
                System.out.println("Não existe mês correspondente");
        }
    }
}