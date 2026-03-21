package aula12;
import javax.swing.JOptionPane;

public class Projeto {
    public static void main(String[] args) {

        int n, soma = 0, pares = 0, impares = 0, totalnumero = 0, acimadecem = 0, maiornumero = 0, menornumero = 999;

        while (true) {

            n = Integer.parseInt(JOptionPane.showInputDialog(null,
                    "<html>Informe um número: <br><em>(valor 0 Interrompe)</em></html>"));

            if (n == 0) break;

            totalnumero++;                         // soma quantidade de numero

            soma += n;                              // soma todos os numeros

            if (n % 2 == 0) {                        // verifica se é par ou impar
                pares++;

            } else {
                impares++;
            }

            if (n >= 100) {                         // verifica quantos numeros maior que 100
                acimadecem++;
            }

            if (n > maiornumero) {
                maiornumero = n;
            }

            if (n < menornumero) {
                menornumero = n;
            }
        }

        JOptionPane.showMessageDialog(null, "<html>Resultado final <hr>" +
                "Total de numeros: " + totalnumero +
                "<br>Somatorio dos valores: " + soma +
                "<br>Total de Pares: " + pares +
                "<br>Total de Ímpares: " + impares +
                "<br>Acima de 100: " + acimadecem +
                "<br>Maior Valor: " + maiornumero +
                "<br>Menor Valor: " + menornumero);
    }
}
