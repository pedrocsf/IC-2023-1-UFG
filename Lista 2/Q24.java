import java.util.Scanner;

public class Q24 {
    public static void main(String[] args) {
        Scanner ENTRADA = new Scanner(System.in);
        System.out.println("Digite a distância do percurso (km):");
        float DISTANCIA = ENTRADA.nextFloat();
        ENTRADA.nextLine(); 

        System.out.println("Digite o tipo de carro (A, B ou C):");
        String TIPO = ENTRADA.nextLine();
        ENTRADA.close();

        float CONSUMO = 0; 
        if(TIPO.equals("A")){
            CONSUMO = DISTANCIA/12;
        } else if(TIPO.equals("B")){
            CONSUMO = DISTANCIA/9;
        } else if(TIPO.equals("C")){
            CONSUMO = DISTANCIA/8;
        } else {
            System.out.println("Tipo de carro inválido.");
            return; 
        }

        System.out.println("Consumo estimado de combustível: " + CONSUMO);
    }
}
