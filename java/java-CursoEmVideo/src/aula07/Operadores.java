package aula07;

public class Operadores {
    public static void main(String[] args) {

        float a = 8.9f;
        int chao = (int) Math.floor(a);
        // Arredonda para baixo
        System.out.println(chao);

        float b = 8.4f;
        int media = (int) Math.round(b);
        // Arredonda certinho
        System.out.println(media);

        float c = 8.1f;
        int baixo = (int) Math.ceil(c);
        // Arredonda para cima
        System.out.println(baixo);

        // Gerador de número:
        double d = Math.random();
        System.out.println(d);

        double e = (int) (5 + d * (10 - 5));
        // entre 5 e 10
        System.out.println(e);

        double f = (int) (15 + d * (50 - 15));
        // entre 15 e 50
        System.out.println(f);
    }
}
