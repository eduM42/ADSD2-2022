use ALUNO_F13

create table shopping(
	codigo_shopping varchar(3),
	nome_shopping varchar(40) not null,
	endereco_shopping varchar(30) not null,
	bairro_shopping varchar(30),
	cidade_shopping varchar(30),
	uf_shopping varchar(2),
	fone_administrativo varchar(13),
	constraint PK_codigo_shopping Primary key(codigo_shopping)
);

create table TB_Lojas(
	codigo_loja varchar(3),
	nome_loja varchar(30) not null,
	codigo_shopping varchar(3),
	CNPJ_loja varchar(17) unique,
	constraint PK_codigo_loja primary key(codigo_loja),
	constraint FK_Codigo_Shopping_Lojas foreign key(codigo_shopping) references shopping(codigo_shopping)
);

create table TB_Cargo(
	codigo_cargo varchar(5),
	nome_do_cargo varchar(05) not null,
	comissao_cargo money,
	constraint PK_codigo_cargo primary key(codigo_cargo),
);

create table TB_Funcionarios(
	codigo_funcionario varchar(3),
	nome_funcionario varchar(40) not null,
	sexo_funcionario char(1),
	data_nascimento date,
	cpf varchar(12) unique,
	cod_cargo varchar(5),
	cod_loja varchar(3),
	data_admissao datetime,
	constraint PK_Codigo_Funcionario primary key(codigo_funcionario),
	constraint FK_Codigo_Cargo_Func foreign key(cod_cargo) references TB_Cargo(codigo_cargo),
	constraint FK_Codigo_Loja_Func foreign key(cod_loja) references TB_Lojas(codigo_loja)
);