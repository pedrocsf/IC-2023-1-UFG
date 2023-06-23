import java.util.Scanner;
public class Q1{
  public static void main(String[] args){
    Scanner ENTRADA = new Scanner(System.in);
    System.out.println("Digite um número de 1 a 7");
    int NUM = ENTRADA.nextInt();
    ENTRADA.close();
    if (NUM == 1)
    System.out.println("O primeiro dia da semana é Domingo");
    else
      if (NUM == 2)
      System.out.println("O segundo dia da semana é Segunda-feira");
      else
        if (NUM == 3)
        System.out.println("O terceiro dia da semana é Terça-feira");
        else
          if (NUM == 4)
          System.out.println("O quarto dia da semana é Quarta-feira");
          else
            if (NUM == 5)
            System.out.println("O quinto dia da semana é Quinta-feira");
            else
              if (NUM == 6)
              System.out.println("O sexto dia da semana é Sexta-feira");
              else
                if (NUM == 7)
                System.out.println("O sétimo e último dia da semana é Sábado");
                else
                System.out.println("O valor digitado não é válido");
  }
}
