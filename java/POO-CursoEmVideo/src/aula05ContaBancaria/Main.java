package aula05ContaBancaria;

public class Main {
    static void main() {
        Conta p1 = new Conta();
        p1.setName("Jubuleu");
        p1.abriConta("Corrente");
        p1.imprimir();

        System.out.println("");

        Conta p2 = new Conta();
        p2.setName("Creuza");
        p2.abriConta("Poupança");
        p2.imprimir();

        System.out.println("");

        p1.depositar(300);
        System.out.println("");
        p2.depositar(500);

        System.out.println("");

        p2.sacar(100);
        System.out.println("");
        p1.sacar(1000);

    }
}
