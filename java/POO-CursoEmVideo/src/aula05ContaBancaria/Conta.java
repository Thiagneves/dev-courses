package aula05ContaBancaria;

public class Conta {
    // Atributos
    public int numConta;
    protected String type;
    private String name;
    private float saldo;
    private boolean status;

    // Metodos Personalizados
    public void abriConta(String type) {
        this.setType(type);
        this.setStatus(true);

        if (type == "Corrente"){
            this.setSaldo(50);
        }

        else if (type == "Poupança") {
            this.setSaldo(150);
        }

        System.out.println("Conta aberta com Sucesso!");
    }

    public void fecharConta(){
        if (this.getSaldo() > 0) {
            System.out.println("Conta com Saldo!");
            return;
        }

        else if (this.getSaldo() < 0){
            System.out.println("Cliente com Débitos!");
            return;
        }

        this.setStatus(false);
        System.out.println("Conta fechada com Sucesso!");

    }

    public void depositar(float valor){

        if (this.getStatus()) {
            this.setSaldo(this.getSaldo() + valor);
            imprimir();
            return;
        }

        System.out.println("Conta não está aberta!");

    }

    public void sacar(float valor){

        if (getStatus()){
            if (getSaldo() < valor){
                System.out.println("Saldo insuficiente!");
                return;
            }

            setSaldo(getSaldo() - valor);
            imprimir();
            return;
        }

        System.out.println("Conta não está aberta!");
    }

    public void pagarMensalidade(){
        if (getStatus() == false) {
            System.out.println("Conta não encontrada!");
            return;
        }

        int taxa = 0;

        if (this.getType() == "Corrente"){
            taxa = 20;
        }

        else if (this.getType() == "Poupança") {
            taxa = 12;
        }

        this.setSaldo(getSaldo() - taxa);
        imprimir();
    }

    public void imprimir(){

        if (status == false) {
            System.out.println("Conta não localizada");
            return;
        }

        System.out.println("-- DADOS DA CONTA --");
        System.out.println("Tipo: " +getType());
        System.out.println("Numero da conta: " +getNumConta());
        System.out.println("Proprietario: " +getName());
        System.out.println("Saldo: " +getSaldo());
    }

    // Metodos Especiais

    // Construtor
    public Conta() {
        this.setSaldo(0);
        this.setStatus(false);
    }

    // Getter & Setter

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    // --------- //

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    // --------- //

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    // --------- //

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    // --------- //

    public boolean getStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }

    // --------- //
}
