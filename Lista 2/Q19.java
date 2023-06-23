import java.util.Scanner;

public class Q19 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.print("Digite o nome da pessoa: ");
        String NOME= ENTRADA.nextLine();
        System.out.print("Digite a idade: ");
        int IDADE = ENTRADA.nextInt();
        ENTRADA.close();
        int VALOR = 0;
        if(IDADE<10||IDADE==10){
        VALOR = 30;
        }
        if(IDADE>10&&IDADE<=29){
        VALOR = 60;
        }
        if(IDADE>29&&IDADE<=45){
        VALOR = 120;
        }
        if(IDADE>45&&IDADE<=59){
        VALOR = 150;
        }
        if(IDADE>59&&IDADE<=65){
        VALOR = 250;
        }
        if(IDADE>65){
        VALOR = 400;
        }
        System.out.println("Nome: " + NOME);
        System.out.println("Valor: " + VALOR);
    }
}