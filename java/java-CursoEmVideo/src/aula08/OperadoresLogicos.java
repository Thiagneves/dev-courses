package aula08;

public class OperadoresLogicos {
    public static void main(String[] args) {
        int n1, n2, r, s;

        n1 = 4;
        n2 = 8;

        r = (n1 > n2) ? 0 : 1;
        s = (n2 > n1) ? 0 : 1;
        System.out.println(r);
        System.out.println(s);
    }
}
