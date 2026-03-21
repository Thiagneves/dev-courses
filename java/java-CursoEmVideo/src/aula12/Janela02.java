package aula12;
import javax.swing.JOptionPane;

public class Janela02 {
    public static void main(String[] args) {

        int n = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe um número: "));
        JOptionPane.showMessageDialog(null, "Você digitou o valor: " +n);

    }
}
