CREATE TABLE cliente (
  id_cliente INTEGER PRIMARY KEY AUTOINCREMENT,
  nome_cliente VARCHAR(100) NOT NULL,
  cpf_cliente CHAR(11) UNIQUE NOT NULL,
  endereco_cliente VARCHAR(50) NOT NULL,
  email_cliente VARCHAR(100) NOT NULL
 );
 
 CREATE TABLE telefone_cliente (
   id_telefone_cliente INTEGER PRIMARY KEY AUTOINCREMENT,
   id_cliente INTEGER NOT NULL,
   telefone_cliente VARCHAR(20) NOT NULL,
   FOREIGN KEY (id_cliente) REFERENCES Cliente(id_cliente)
 );
 
 CREATE TABLE conta (
   id_conta_cliente INTEGER PRIMARY KEY AUTOINCREMENT,
   tipo_conta VARCHAR(50) NOT NULL,
   numero_conta INTEGER UNIQUE NOT NULL,
   data_abertura DATE NOT NULL,
   id_cliente INTEGER NOT NULL,
   FOREIGN key (id_cliente) REFERENCES Cliente(id_cliente)
 );
 
 CREATE TABLE perfil_credito (
   id_perfil_cliente INTEGER PRIMARY KEY AUTOINCREMENT,
   score_cliente INTEGER NOT NULL,
   data_consulta DATE NOT NULL,
   fonte_consulta VARCHAR(20) NOT NULL,
   justificativa VARCHAR(50),
   id_cliente INTEGER NOT NULL,
   FOREIGN KEY (id_cliente) REFERENCES Cliente(id_cliente)
 );
 
 CREATE TABLE assessor (
   id_assessor INTEGER PRIMARY KEY AUTOINCREMENT,
   nome VARCHAR(50) NOT NULL,
   cargo VARCHAR(50) NOT NULL,
   email VARCHAR(50) NOT NULL,
   departamento VARCHAR(50) NOT NULL
 );
 
 CREATE TABLE telefone_assessor (
   id_telefone_assessor INTEGER PRIMARY KEY AUTOINCREMENT,
   id_assessor INTEGER NOT NULL,
   telefone_assessor VARCHAR(20) NOT NULL,
   FOREIGN KEY (id_assessor) REFERENCES Assessor(id_assessor)
 );
 
 CREATE TABLE cedula_credito (
   id_cedula INTEGER PRIMARY KEY AUTOINCREMENT,
   tipo VARCHAR(20) NOT NULL,
   valor_contrato INTEGER NOT NULL,
   data_contrato DATE NOT NULL,
   prazo INTEGER NOT NULL,
   status_cedula VARCHAR(20) NOT NULL,
   data_parcela DATE NOT NULL,
   status_parcela VARCHAR(20),
   id_cliente INTEGER NOT NULL,
   FOREIGN key (id_cliente) REFERENCES Cliente(id_cliente),
   id_assessor INTEGER NOT NULL,
   FOREIGN KEY (id_assessor) REFERENCES Assessor(id_assessor)
 );
 
 
 
 
 