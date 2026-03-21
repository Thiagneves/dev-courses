package aula09;

import java.util.Scanner;

public class EstruturasCondicionais {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Primeira nota: ");
        float num1 = teclado.nextFloat();
        System.out.println("Segunda nota: ");
        float num2 = teclado.nextFloat();

        float media = (num1 + num2) / 2;

        System.out.println(media);

        if (media > 9) {
            System.out.println("Parabéns");
        }

        System.out.println("Que ano voce nasceu? ");
        int anoNascimento = teclado.nextInt();

        int idade = 2025 - anoNascimento;
        System.out.println((idade >= 18) ? "Voce eh maior de idade" : "Voce eh menor de idade");

        /*
        if (idade >= 18) {
            System.out.println("Voce eh maior de idade");
        } else {
            System.out.println("Voce eh menor de idade");
        }
        */
    }
}
