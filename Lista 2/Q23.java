import java.util.Scanner;

public class Q23 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite o nome do livro: ");
        String LIVRO = ENTRADA.nextLine();
        System.out.println("Digite o tipo de usuário: ");
        System.out.println("1 Professor");
        System.out.println("2 Aluno");
        int TIPO = ENTRADA.nextInt();
        ENTRADA.close();
        if(TIPO==1){
            System.out.println(" ");
            System.out.println("Nome do livro: " + LIVRO);
            System.out.println("Tipo de usuário: Professor");
            System.out.println("Total de dias: 10 dias");
        }
        if(TIPO==2){
            System.out.println(" ");
            System.out.println("Nome do livro: " + LIVRO);
            System.out.println("Tipo de usuário: Aluno");
            System.out.println("Total de dias: 3 dias");
        }
    }
}