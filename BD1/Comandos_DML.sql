use ALUNO_F13

create table Funcionario(
    NUM_FUNC char(6),
    NOME varchar(12),
    SOBRENOME varchar(25) not null,
    DEPT char(3),
    FONE char(14),
    DTADIM date,
    NIVEL int,
    SEXO char(1) check (SEXO in ('F','M')),
    DATANAS date,
    SALARIO money,
    BONUS money,
    COMIS money,

    constraint PK_NUM_FUNC primary key (NUM_FUNC),
    constraint FK_DEPT foreign key (DEPT)
),

create table Depto(
    DEPTO char(3),
    DESC_DEPTO varchar(20),

    constraint PK_DEPTO primary key (DEPTO)
)

Insert into Depto (DEPTO) values ("001")
Insert into Depto (DEPTO) values ("002")
Insert into Depto (DEPTO) values ("003")
Insert into Depto (DEPTO) values ("004")
Insert into Depto (DEPTO) values ("005")
Insert into Depto (DEPTO) values ("006")

Insert into Depto (DESC_DEPTO) values ("DERETORIA", "GERÊNCIA", "ENGENHARIA", "PRODUÇÃO", "INFORMATICA", "GERÊNCIA INFORMÁTICA")

Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F001", 0.003, "Oswaldo", "Tavares", "DIRETORIA", "30/01/2022", 3, "M", "12/02/1808")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F002", 0.003, "Ovo", "Conto", "DIRETORIA", "30/01/2002", 3, "M", "11/02/1822")

Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F003", 0.003, "Pastel", "Carne", "GERÊNCIA", "30/01/2002", 2, "M", "11/02/1822")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F004", 0.003, "Fogazza", "Frango", "GERÊNCIA", "02/12/0020", 1, "M", "12/12/0002")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F005", 0.003, "Gerônimo", "Calabresa", "GERÊNCIA", "30/03/0003", 4, "M", "21/05/0001")

Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F006", 0.003, "Eutaku", "Palacima", "ENGENHARIA", "30/01/2002", 2, "M", "11/02/13422")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F007", 0.003, "Cromupilo", "Alimídio", "ENGENHARIA", "02/12/0020", 1, "M", "12/12/0022")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F008", 0.003, "Jão", "Sholkovictz", "ENGENHARIA", "30/03/0003", 4, "M", "21/05/0432")

Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F009", 0.003, "Eutaku", "Palabaixo", "PROUÇÃO", "02/02/2202", 3, "M", "11/02/1822")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0010",0.003,  "Pikachu", "Alves", "PRODUÇÃO", "12/03/21223", 2, "M", "12/12/0002")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0011",0.003,  "Arbok", "Ekans", "PRODUÇÃO", "01/11/2121", 3, "M", "21/05/0001")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0012",0.003,  "Torterra", "Cosmopolita", "PROUÇÃO", "02/02/2202", 1, "M", "11/02/1822")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0013",0.003,  "Bulbassauro", "Cancerígeno", "PRODUÇÃO", "12/03/21223", 1, "M", "12/12/0002")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0014",0.003,  "Tiranossauro", "Rox", "PRODUÇÃO", "01/11/2121", 1, "M", "21/05/0001")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0015",0.003,  "Marcos", "Paleolítico", "PRODUÇÃO", "01/01/0001", 1, "M", "02/01/5322")

Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0016",0.003,  "Girovano", "Cravio", "INFORMATICA", "10/05/2005", 3, "M", "05/05/2019")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0017",0.003,  "Tremio", "Breco", "INFORMATICA", "07/07/2007", 2, "M", "08/08/2028")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0018",0.003,  "Calasilo", "Truno", "INFORMATICA", "05/09/2001", 3, "M", "25/07/2024")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0019",0.003,  "grepo", "Prego", "INFORMATICA", "07/08/2009", 1, "M", "10/11/2032")
Insert into Funcionario (NUM_FUNC, SALARIO, NOME, SOBRENOME, DEPT, DTADIM, NIVEL, SEXO, DATANAS) values ("F0020",0.003,  "Talibano", "Cancerígeno", "INFORMATICA", "01/05/2002", 1, "M", "05/10/2045")

