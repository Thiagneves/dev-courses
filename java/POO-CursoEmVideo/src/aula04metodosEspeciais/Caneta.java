package aula04metodosEspeciais;

import java.sql.SQLOutput;

public class Caneta {
    public String modelo;
    public String cor;
    private double ponta;
    private boolean tampa;

    // Construtor
    public void Caneta(String m, String c, Double p){
        setModelo(m);
        setCor(c);
        setPonta(p);
        tampar();
    }

    public void status(){
        System.out.println("SOBRE A CANETA: ");
        System.out.println("Modelo: " +getModelo());
        System.out.println("Cor: " +getCor());
        System.out.println("Ponta: " +getPonta());
        System.out.println("Tampada: " +tampa);
    }

    public String getModelo(){
        return modelo;
    }

    private void setModelo(String m){
        this.modelo = m;
    }

    public String getCor(){
        return cor;
    }

    private void setCor(String c){
        this.cor = c;
    }

    public double getPonta(){
        return ponta;
    }

    private void setPonta(double p){
        this.ponta = p;
    }

    public void tampar(){
        this.tampa = true;
    }

    public void destampar(){
        this.tampa = false;
    }

}
