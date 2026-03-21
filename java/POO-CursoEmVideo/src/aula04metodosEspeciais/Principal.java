package aula04metodosEspeciais;

public class Principal {

    public static void main(String[] args) {

        Caneta c1 = new Caneta();

        // Uma unica linha para criar uma caneta
        c1.Caneta("BIC Cristal", "Azul", 0.5);

        c1.status();
    }
}
