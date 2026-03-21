package aula03visibilidade;

public class Main {

    public static void main(String[] args) {

        Caneta c1 = new Caneta();

        c1.modelo = "Bic cristal";
        c1.cor = "Azul";
        //c1.ponta = 0.5f; atributo privado
        c1.carga = 80;
        //c1.tampada = false;
        // Posso mexer pq mesmo protegido estou usando na classe dele

        c1.destampar();
        //c1.tampar();
        // Mesmo o atributo tampada sendo privado podemos mexer nele usando os metodos dentro da classe

        c1.status();
        c1.rabiscar();

    }
}
