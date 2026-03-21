package aula03visibilidade;

public class Caneta {

    public String modelo;
    public String cor;
    private float ponta;
    protected int carga;
    private boolean tampada;

    public void status(){
        System.out.println("Modelo: " +this.modelo);
        System.out.println("Uma caneta " +this.cor);
        System.out.println("Ponta: " +this.ponta);
        System.out.println("Carga: " +this.carga);
        System.out.println("Está tampada? " +this.tampada);
    }

    public void rabiscar(){
        if (this.tampada == true){
            System.out.println("ERRO! A caneta está tampada");
        } else {
            System.out.println("Rabisco feito");
        }
    }

    protected void tampar(){
        if(tampada == true){
            System.out.println("A caneta já está tampada");
        } else {
            this.tampada = true;
        }
    }

    protected void destampar(){
        if (tampada == false){
            System.out.println("A canetá já está destampada");
        } else {
            this.tampada = false;
        }
    }


}
