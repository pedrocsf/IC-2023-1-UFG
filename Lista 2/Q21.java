import java.util.Scanner;

public class Q21 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite a pontuação do primeiro jogador: ");
        int PONTO1= ENTRADA.nextInt();
        System.out.println("Digite a pontuação do segundo jogador: ");
        int PONTO2= ENTRADA.nextInt();
        System.out.println("Digite a pontuação do terceiro jogador: ");
        int PONTO3= ENTRADA.nextInt();
        ENTRADA.close();
        
        int MAIOR_PROVAVEL;
        int MENOR_PROVAVEL;

        if(PONTO1>PONTO2){
        MAIOR_PROVAVEL = PONTO1;
        MENOR_PROVAVEL = PONTO2;
        }
        else{
        MAIOR_PROVAVEL = PONTO2;
        MENOR_PROVAVEL = PONTO1;
        }

        if (PONTO3>MAIOR_PROVAVEL){
        System.out.println("Pontuação da equipe: " + PONTO3 + " " + MAIOR_PROVAVEL + " " + MENOR_PROVAVEL);
        }
        else{
            if(PONTO3>MENOR_PROVAVEL){
                System.out.println("Pontuação da equipe: " + MAIOR_PROVAVEL + " " + PONTO3 + " " + MENOR_PROVAVEL);
            }
            else{
                System.out.println("Pontuação da equipe: " + MAIOR_PROVAVEL + " " + MENOR_PROVAVEL + " " + PONTO3);
            }
        }
        float MEDIA = (PONTO1+PONTO2+PONTO3)/3;
        if(MEDIA>100){
        System.out.println("Média de pontos: " + MEDIA);
        }
        else{
        System.out.println("Equipe desclassificada");   
        }
    }
}