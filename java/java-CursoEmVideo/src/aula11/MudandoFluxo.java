package aula11;

public class MudandoFluxo {
    public static void main(String[] args) {
        int cc = 0;

        while (cc < 10){
            cc++;

            if (cc == 5 || cc == 7){
                continue; //volta para o começo do loop
            }

            System.out.println("Cambalhota "+(cc));
        }

        System.out.println(" ");

        int cc2 = 0;

        while (cc2 < 10){
            cc2++;

            if (cc2 == 5){
                break; // finaliza o loop
            }

            System.out.println("Cambalhota " +(cc2));
        }
    }
}

