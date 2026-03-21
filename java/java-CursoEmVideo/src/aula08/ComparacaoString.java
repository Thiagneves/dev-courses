package aula08;

public class ComparacaoString {
    public static void main(String[] args) {
        String nome1 = "Thiago";
        String nome2 = "Thiago";
        String nome3 = new String("Thiago");

        String resposta1, resposta2, resposta3;

        resposta1 = (nome1 == nome2) ? "igual" : "diferente";
        System.out.println(resposta1);

        resposta2 = (nome1 == nome3) ? "igual" : "diferente";
        System.out.println(resposta2);

        resposta3 = (nome1.equals(nome3)) ? "igual" : "diferente";
        // Para objetos usamos equals não o ==
        System.out.println(resposta3);


    }
}
