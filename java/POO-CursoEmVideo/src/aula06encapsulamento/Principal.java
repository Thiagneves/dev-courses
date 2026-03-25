package aula06encapsulamento;

public class Principal {
    public static void main(String[] args) {
        ControleRemoto tvQuarto = new ControleRemoto();

        tvQuarto.ligar();
        tvQuarto.abriMenu();
        tvQuarto.fecharMenu();

        tvQuarto.maisVolume();
        tvQuarto.maisVolume();
        tvQuarto.maisVolume();
        tvQuarto.maisVolume();
        tvQuarto.maisVolume();
        tvQuarto.maisVolume();

        tvQuarto.menosVolume();

        tvQuarto.abriMenu();
    }
}
