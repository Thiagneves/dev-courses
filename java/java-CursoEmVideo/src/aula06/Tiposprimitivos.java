package aula06;

import java.util.Scanner;

public class Tiposprimitivos {
    public static void main(String[] args) {
        float nota = 8.5f;
        float nota1 = (float) 8.9;

        String nome = "Thiago";

        // SAÍDA DE DADOS:
        System.out.print("A nota eh: " +nota);
        System.out.println(" "); // Só para dar um espaço
        System.out.println("A nota 2 eh: " +nota1);

        System.out.printf("A nota eh %f \n", nota);
        System.out.printf("A nota 2 eh %.2f \n", nota1); // Formatada

        System.out.format("A nota de %s eh: %.2f \n\n", nome, nota);

        // ENTRADA DE DADOS:
        Scanner teclado = new Scanner(System.in);

        System.out.println("Qual seu nome?");
        String nomeUsuario = teclado.nextLine();

        System.out.println("Qual a sua idade?");
        int idade = teclado.nextInt();

        System.out.println("Qual o seu salario?");
        float salario = teclado.nextFloat();

        System.out.format("%s tem %d anos e recebe R$ %.2f reais de salario \n\n", nomeUsuario, idade, salario);

        // Incompatibilidades
        // Numero => String

        int numero = 30;

        /*
         * String valor = idade;
         * Dessa forma nao funciona
         */

        String valor = Integer.toString(numero);

        String id = "100001";
        int IDaluno = Integer.parseInt(id);

    }
}
