package aula15;

public class Metodo {
    static void soma(int a, int b) {
        int soma = a + b;
        System.out.println("A soma é " +soma);
    }

    static int subtracao(int a, int b) {
        int sub = a - b;
        return sub;
    }

    public static void main(String[] args) {
        soma(5, 2);

        int diminuir = subtracao(5, 2);
        System.out.println("A subtração é " +diminuir);
    }
}
