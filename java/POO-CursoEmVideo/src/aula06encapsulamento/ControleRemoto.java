package aula06encapsulamento;

public class ControleRemoto implements Controlador{
    private int volume;
    private int volumeAux;
    private boolean lidado;
    private boolean tocando;

    public ControleRemoto() {
        this.volume = 50;
        this.lidado = false;
        this.tocando = false;
    }

    private int getVolume() {
        return volume;
    }

    private void setVolume(int volume) {
        this.volume = volume;
    }

    private boolean isLidado() {
        return lidado;
    }

    private void setLidado(boolean lidado) {
        this.lidado = lidado;
    }

    private boolean isTocando() {
        return tocando;
    }

    private void setTocando(boolean tocando) {
        this.tocando = tocando;
    }

    private int getVolumeAux() {
        return volumeAux;
    }

    private void setVolumeAux(int volumeAux) {
        this.volumeAux = volumeAux;
    }

    // Metodos Abistratos:
    @Override
    public void ligar() {
        setLidado(true);
    }

    @Override
    public void desligar() {
        setLidado(false);
    }

    @Override
    public void abriMenu() {
        if (this.lidado) {
            System.out.println("Ligado: " +this.isLidado());
            System.out.println("Tocando: " +this.isTocando());
            System.out.print("Volume: " +this.getVolume() +" ");
            for (int i = 0; i <= this.getVolume(); i+=10) {
                System.out.print("|");
            }
            System.out.println(" ");
        }
    }

    @Override
    public void fecharMenu() {
        if (this.lidado) {
            System.out.println("Menu fechado..");
        }
    }

    @Override
    public void maisVolume() {
        if (this.volume < 100 && this.lidado) {
            setVolume(this.getVolume() +10);
        }
    }

    @Override
    public void menosVolume() {
        if (this.volume >= 0  && this.lidado) {
            setVolume(this.getVolume() -1);
        }
    }

    @Override
    public void ligarMudo() {
        if (this.isLidado() && this.getVolume() > 0){
            this.setVolumeAux(this.getVolume());
            this.setVolume(0);
        }
    }

    @Override
    public void desligarMudo() {
        if (this.isLidado() && this.getVolume() == 0){
            this.setVolume(this.volumeAux);
        }
    }

    @Override
    public void play() {
        if (this.isLidado() && !(this.isTocando())) {
            setTocando(true);
        }
    }

    @Override
    public void pouse() {
        if (this.isLidado() && this.isTocando()){
            setTocando(false);
        }
    }
}
