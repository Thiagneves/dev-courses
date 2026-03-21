package aula09;

import java.util.Scanner;

public class MultiplasEscolhas {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("O animal tem quantas pernas? ");
        int pernas = teclado.nextInt();

        switch (pernas){
            case 1:
                System.out.println("Saci");
                break;

            case 2:
                System.out.println("Bípede");
                break;

            case 4:
                System.out.println("Quadrúpede");
                break;

            default:
                System.out.println("ET");
        }
    }
}