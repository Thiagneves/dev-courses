package aula02classes;

public class Main {
    public static void main(String[] args) {

        Caneta caneta1 = new Caneta();
        caneta1.cor = "Azul";
        caneta1.ponta = 0.5f;
        //caneta1.tampada = false;
        caneta1.tampar();
        caneta1.status();
        caneta1.destampar();
        caneta1.rabiscar();

        Caneta caneta2 = new Caneta();
        caneta2.modelo = "Stabilo";
        caneta2.cor = "vermelho";
        caneta2.carga = 100;
        caneta2.ponta = 1.0f;
        caneta2.status();
    }
}
