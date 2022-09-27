use ALUNO_F13

create table Clientes(
    codigo_cliente varchar(10) unique not null,
    endereco_ciente varchar(30),
    cidade_ciente varchar(20),
    cep_ciente varchar(10),
    uf_ciente char(2),
    pais_ciente char(20),
    telefone_ciente varchar(20),
    fax_ciente varchar(20),
	
	constraint pk_codigo_cliente primary key (codigo_cliente)
)

create table Pedidos(
	numero_pedido varchar(10),
	codigo_cliente varchar(10) not null,
	codigo_funcionario varchar(10),
	data_pedido date,
	data_entrega date,
	data_envio date,
	frete money,
	nome_destinatario char(20),
	edereco_destinatario varchar(30),
	cidade_destino varchar(30),
	cep_destino varchar(10),
	pais_destino varchar(20),

	constraint pk_numero_pedido primary key (numero_pedido),
	constraint fk_codigo_cliente foreign key (codigo_cliente) references Clientes (codigo_cliente)
)

create table Fornecedores(
    codigo_fornecedor varchar(30),
    nome_empresa char(30),
    nome_contato char(30),
    cargo_contato char(30),
    endereco varchar(30),
    cidade varchar(30),
    uf char(2),
    cep varchar(10),
    pais varchar(20),
    telefone varchar(20),
    fax varchar(20),

    constraint pk_codigo_fornecedor primary key (codigo_fornecedor)
)

create table Categorias(
    codigo_categoria varchar(20),
    nome_categoria varchar(20),
    descricao char(30),
    figura image,

    constraint pk_codigo_categoria primary key (codigo_categoria)
)

create table Produtos(
    codigo_produto varchar(20),
    nome_produto varchar(30),
    codigo_fornecedor varchar(30),
    codigo_categoria varchar(20),
    quantidade_unidade int,
    preco_unitario money,
    unidades_estoque int,
    unidades_pedidas int,
    nivel_estoque int,
    descontinuado varchar(5),

    constraint pk_codigo_produto primary key (codigo_produto),
    constraint fk_codigo_fornecedor foreign key (codigo_fornecedor) references Fornecedores(codigo_fornecedor),
    constraint fk_codigo_categoria foreign key (codigo_categoria) references Categorias(codigo_categoria)
)

create table Itens_Pedidos(
	numero_pedido varchar(10),
	codigo_produto varchar(20),
	preco_unitario money,
	quantidade int,
	desconto float,

	constraint fk_numero_pedido foreign key (numero_pedido) references Pedidos(numero_pedido),
    constraint fk_codigo_produto foreign key (codigo_produto) references Produtos(codigo_produto)
)