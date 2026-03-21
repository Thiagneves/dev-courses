package aula15;

import javax.swing.JOptionPane;

public class Projeto {
    public static void main(String[] args) {
        int num = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe um número: "));

        JOptionPane.showMessageDialog(null, Operadores.Fatoral(num));
    }
}
