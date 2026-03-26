package aula07relacionamento;

public class Principal {
    public static void main(String[] args) {
        Lutador lutador[] = new Lutador[6];

        lutador[1] = new Lutador("Pretty Boy", "França", 31, 1.75, 68.9f, 11, 2, 1);

        lutador[2] = new Lutador("Putscript", "Brasil", 29, 1.68, 57.8f, 14, 2, 3);

        lutador[1].status();
        System.out.println(" ");
        lutador[2].status();
    }
}
