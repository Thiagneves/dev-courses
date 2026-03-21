package aula13;

import java.util.Scanner;

public class Projeto {
    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        System.out.println("Início: ");
        int inicio = scan.nextInt();

        System.out.println("Fim: ");
        int fim = scan.nextInt();

        System.out.println("Passo: ");
        int passo = scan.nextInt();

        for (int i = inicio; i <= fim; i+=passo) {
            System.out.println(i);
        }
    }
}
