package aula14;

import java.util.Scanner;

public class ArraysProj {

    public static void main(String[] args) {
        int num[] = {3, 5, 1, 8, 4, 10, 2};

        for (int valor: num){
            System.out.println(valor);
        }

        System.out.println(" "); // ---------------------------------------------------------------- //

        System.out.println("Vetor em ordem: ");

        java.util.Arrays.sort(num);

        for (int valor: num){
            System.out.println(valor);
        }

        System.out.println(" "); // --------------------------------------------------------------- //

        System.out.println("----- Busca dentro do vetor -----");

        var scan = new Scanner(System.in);

        System.out.println("Digite o valor que deseja procurar: ");
        int keyDigitada = scan.nextInt();

        int pos = java.util.Arrays.binarySearch(num, keyDigitada); //busca binaria
        System.out.println("Possição: " +pos);

        /*
        * Para que a busca binaria funcione é necessario que o vetor esteje ordenado.
        */
    }
}
