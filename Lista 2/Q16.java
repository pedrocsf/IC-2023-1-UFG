import java.util.Scanner;

public class Q16 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Qual o valor do salário: ");
        float SALARIO= ENTRADA.nextFloat();
        ENTRADA.close();
        if (SALARIO<=600){
            System.out.println("Desconto: Isenção total");
            System.out.println("Valor final: 0");
        }
        if(SALARIO>600 && SALARIO<=1200){
            System.out.println("Desconto: 20%");
            System.out.println("Valor final: " + SALARIO*0.8);
        }
        if(SALARIO>1200 && SALARIO<=2000){
            System.out.println("Desconto: 25%");
            System.out.println("Valor final: " + SALARIO*0.75);
        }
        if(SALARIO>2000){
            System.out.println("Desconto: 30%");
            System.out.println("Valor final: " + SALARIO*0.7);
        }
    }
}
