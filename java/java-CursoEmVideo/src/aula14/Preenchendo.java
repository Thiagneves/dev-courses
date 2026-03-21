package aula14;

import java.util.Arrays;

public class Preenchendo {
    public static void main(String[] args) {
        int num[] = new int[10];

        Arrays.fill(num, 8); // o vetor será preenchido inteiramente com o numero 8

        for (int valor: num) {
            System.out.print(valor + " ");
        }
    }
}
