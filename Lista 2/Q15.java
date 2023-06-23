import java.util.Scanner;

public class Q15 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Digite o nome do aluno: ");
        String nome = entrada.nextLine();

        System.out.print("Digite a nota da prova 1: ");
        double nota1 = entrada.nextDouble();

        System.out.print("Digite a nota da prova 2: ");
        double nota2 = entrada.nextDouble();

        entrada.close();

        double media = (nota1 + nota2) / 2;

        System.out.println("Nome do aluno: " + nome);
        System.out.println("Nota da prova 1: " + nota1);
        System.out.println("Nota da prova 2: " + nota2);
        System.out.println("Média das notas: " + media);

        if (media >= 7) {
            System.out.println("Situação: Aprovado");
        } else if (media < 3) {
            System.out.println("Situação: Reprovado");
        } else {
            System.out.println("Situação: Em Prova Final");
        }
    }
}