package aula07relacionamento;

public class Lutador {
    private String nome;
    private String nacionalidade;
    private int idade;
    private double altura;
    private float peso;
    private String categoria;
    private int vitorias, derrotas, empates;

    public Lutador(String nome, String nacionalidade, int idade, double altura, float peso, int vitorias, int derrotas, int empates) {
        setNome(nome);
        setNacionalidade(nacionalidade);
        setIdade(idade);
        setAltura(altura);
        setPeso(peso);
        setVitorias(vitorias);
        setDerrotas(derrotas);
        setEmpates(empates);
    }

    public void apresentar() {
        System.out.println("========== lUTADOR: ==========");
        System.out.println("Nome: "             +this.nome);
        System.out.println("Nacionalidade: "    +this.nacionalidade);
        System.out.println("Idade: "            +this.idade);
        System.out.println("Altura: "           +this.altura);
        System.out.println("Peso: "             +this.peso);
        System.out.println("Categoria: "        +this.categoria);
        System.out.println("Vitorias "          +this.vitorias);
        System.out.println("Derrotas: "         +this.derrotas);
        System.out.println("Empates: "          +this.empates);
        System.out.println("========== ========== ==========");
    }

    public void status(){
        System.out.println("========== Sobre o lUTADOR: ==========");
        System.out.println("Sue nome é: " + this.nome + " pesando " + this.peso + " categoria " + this.categoria);
        System.out.println("Ganhou: " + this.vitorias + " lutas");
        System.out.println("Perdeu " + this.derrotas + " lutas");
        System.out.println("Empatou " + this.empates + " lutas");
    }

    public void ganharLuta() {
        this.setVitorias(this.getVitorias() + 1);
    }

    public void perderLuta() {
        this.setDerrotas(this.getDerrotas() + 1);
    }

    public void empatarLuta() {
        this.setEmpates(this.getEmpates() + 1);
    }

    // GET AND SET

    private String getNome() {
        return nome;
    }

    private void setNome(String nome) {
        this.nome = nome;
    }

    private String getNacionalidade() {
        return nacionalidade;
    }

    private void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    private int getIdade() {
        return idade;
    }

    private void setIdade(int idade) {
        this.idade = idade;
    }

    private double getAltura() {
        return altura;
    }

    private void setAltura(double altura) {
        this.altura = altura;
    }

    private float getPeso() {
        return peso;
    }

    private void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }

    private String getCategoria() {
        return categoria;
    }

    private void setCategoria() {
        if (getPeso() < 52.2) {
            this.categoria = "Inválido";
        }
        else if (getPeso() <= 70.3) {
            this.categoria = "Leve";
        }
        else if (getPeso() <= 83.9) {
            this.categoria = "Média";
        }
        else if (getPeso() <= 120.2) {
            this.categoria = "Pesodo";
        }
        else {
            this.categoria = "Inválido";
        }
    }

    private int getVitorias() {
        return vitorias;
    }

    private void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    private int getDerrotas() {
        return derrotas;
    }

    private void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    private int getEmpates() {
        return empates;
    }

    private void setEmpates(int empates) {
        this.empates = empates;
    }
}
