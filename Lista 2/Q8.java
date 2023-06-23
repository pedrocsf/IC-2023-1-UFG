import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite o valor do salário bruto:");
        float SALARIO = ENTRADA.nextFloat();
        System.out.println("Digite o valor da prestação:");
        float PRESTACAO = ENTRADA.nextFloat();
        ENTRADA.close();
        if(PRESTACAO<=SALARIO*0.3){
            System.out.println("O empréstimo pode ser condedido");
        }
        else{
            System.out.println("O empréstimo não pode ser concedido");
        }
    }
}
