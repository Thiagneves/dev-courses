package aula09;

import java.util.Scanner;

public class CompostasEncadeadas {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite sua idade: ");
        int idade = teclado.nextInt();

        if (idade < 0){
            System.out.println("Idade incorreta ERRO!");
        }

        else if (idade > 0 && idade < 16){
            System.out.println("Você não pode votar.");
        }

        else if (idade >= 16 && idade < 18){
            System.out.println("O seu voto é opcional.");
        }

        else if (idade >= 18 && idade <= 70){
            System.out.println("O seu voto é obrigatorio.");
        }

        else {
            System.out.println("O seu voto é opcional.");
        }
    }
}
