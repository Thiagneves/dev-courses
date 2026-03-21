package aula14;

public class Vetores {
    public static void main(String[] args) {
        int n[] = new int[4]; // n -> 0, 1, 2, 3

        n[0] = 3;
        n[1] = 5;
        n[2] = 8;
        n[3] = 2;

        // outra maneira de declarar:

        int n1[] = {3, 5, 8, 2};
        int[] n2 = {5, 4, 3, 2, 1};

        // Imprimir:

        for (int i = 0; i < 4; i++){
            System.out.println(n[i]);
        }

        System.out.println(" ");

        // Como saber o manho do vetor:
        System.out.println("Total de casas vetor n: " + n.length);

        // Podemos usar o .length ao nosso favor:
        for (int j = 0; j < n2.length; j++){
            System.out.println(n2[j]);
        }


    }
}
