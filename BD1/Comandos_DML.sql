use ALUNO_F13

create table Funcionario(
	NUM_FUNC char(6),
	NOME varchar(12),
	SOBRENOME varchar(25) not null,
	DEPT char(3),
	FONE char(14),
	DTADIM timestamp,
	NIVEL int CHECK(NIVEL IN(1, 2, 3, 4)),
	SEXO CHAR(1) CHECK(SEXO IN('F','M')),
	DATANAS DATE,
	SALARIO decimal(10,2),
	BONUS decimal(10,2),
	COMIS decimal(10,2),
	constraint PK_NUM_FUNC primary key(NUM_FUNC),
);


create table Depto(
	DEPTO char(3),
	DESC_DEPTO varchar(20),
	constraint PK_DEPTO primary key(DEPTO)
);

select * from Funcionario

insert into Depto VALUES('001','DIRETORIA'),('002','GERÊNCIA'),('003','ENGENHARIA'),('004','PRODUÇÃO'),('005','INFORMÁTICA'),('006','GERÊNCIA INFORMÁTICA');

insert into Funcionario (NUM_FUNC,NOME,SOBRENOME,DEPT,FONE,NIVEL,SEXO,DATANAS,SALARIO,COMIS) VALUES
('F001','Luca','Andradd','001','(11)98765-4321',3,'M','2003-05-29',12000.69,5.00),
('F002','Victória','Vanessa','001','(11)91234-5678',4,'F','2002/06/14',140000.50,5.00),
('F003','Ana','Carollyne','002','(11)12345-6789',1,'F','2003/07/10',2.00,2.00),
('F004','Ana','Carol','002','(11)12355-6789',1,'F','2003/07/10',2.00,2.00),
('F005','Vik','Van','002','(11)12245-6789',1,'F','2000/09/12',2.00,2.00),
('F006','Jason','Ildo','003','(11)12945-6789',1,'M','1978/09/19',2.00,2.00),
('F007','Um','Dois','003','(11)12345-6799',1,'M','1993/07/12',2.00,2.00),
('F008','Ana','Carollyne','003','(11)12345-6789',1,'F','0001/12/25',2000000.00,2.00),
('F009','Jes','Us','004','(11)12342-6789',1,'M','1356/04/23',12.00,12.00),
('F010','Abe','Cê Ê','004','(11)33267-6789',1,'F','2003/07/10',2.00,2.00),
('F011','Dê','Efege','004','(11)12995-6789',1,'M','1997/07/10',2.00,2.00),
('F012','Agá','Éle','004','(11)22225-6789',1,'F','2003/07/10',2.00,2.00),
('F013','Eme','Ene','004','(11)55675-6789',1,'M','2003/07/10',2.00,2.00),
('F014','O Pê','Quê','004','(11)13945-6789',1,'F','2003/07/10',2.00,2.00),
('F015','Erre','Ésse','004','(11)15745-6789',1,'M','2003/07/10',2.00,2.00),
('F016','Tê','Ú','005','(31)12305-6789',1,'F','2003/07/10',2.00,2.00),
('F017','Vê','Dabliu','005','(21)10642-6089',1,'M','2003/07/10',2.00,2.00),
('F018','Xis','Ipsilon','005','(19)85345-6789',1,'F','2003/07/10',2.00,2.00),
('F019','Zê','Alfa','005','(46)37905-6789',1,'M','2003/07/10',2.00,2.00),
('F020','Umdois','Tres da Silva Quatro','005','(16)00045-6789',1,'F','2003/07/10',2.00,2.00);


update Funcionario set SALARIO = 14040.80 where NUM_FUNC = 'F001';
update Funcionario set SALARIO = 163800.58 where NUM_FUNC = 'F002';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F003';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F004';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F005';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F006';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F007';
update Funcionario set SALARIO = 2340000.00 where NUM_FUNC = 'F008';
update Funcionario set SALARIO = 14.04 where NUM_FUNC = 'F009';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F010';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F011';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F012';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F013';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F014';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F015';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F016';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F017';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F018';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F019';
update Funcionario set SALARIO = 2.34 where NUM_FUNC = 'F020';


update Funcionario set BONUS = 702.04 where NUM_FUNC = 'F001';
update Funcionario set BONUS = 8190.02 where NUM_FUNC = 'F002';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F003';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F004';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F005';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F006';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F007';
update Funcionario set BONUS = 117.00 where NUM_FUNC = 'F008';
update Funcionario set BONUS = 0.70 where NUM_FUNC = 'F009';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F010';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F011';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F012';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F013';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F014';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F015';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F016';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F017';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F018';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F019';
update Funcionario set BONUS = 0.11 where NUM_FUNC = 'F020';


update Funcionario set BONUS = 0.35 where NUM_FUNC = 'F006';
update Funcionario set BONUS = 0.35 where NUM_FUNC = 'F007';
update Funcionario set BONUS = 351000.00 where NUM_FUNC = 'F008';

update Funcionario set SALARIO = 14742.84 where NUM_FUNC = 'F001';
update Funcionario set SALARIO = 171990.61 where NUM_FUNC = 'F002';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F003';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F004';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F005';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F006';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F007';
update Funcionario set SALARIO = 2457000.00 where NUM_FUNC = 'F008';
update Funcionario set SALARIO = 14.74 where NUM_FUNC = 'F009';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F010';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F011';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F012';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F013';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F014';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F015';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F016';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F017';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F018';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F019';
update Funcionario set SALARIO = 2.45 where NUM_FUNC = 'F020';

update Funcionario set SALARIO = 2.59 where NUM_FUNC = 'F003';
update Funcionario set SALARIO = 2.59 where NUM_FUNC = 'F004';
update Funcionario set SALARIO = 2.59 where NUM_FUNC = 'F005';

update Funcionario set SALARIO = 2.40 where NUM_FUNC = 'F006';
update Funcionario set SALARIO = 2.40 where NUM_FUNC = 'F007';
update Funcionario set SALARIO = 2407860.00 where NUM_FUNC = 'F008';

update Funcionario set FONE = 3643-4576 where NUM_FUNC = 'F004';

delete from Depto where DEPTO = '006';

delete from Funcionario;

delete from Funcionario WHERE DEPT = '005';

delete from Depto where DEPTO = '006';

select * from Funcionario;

select * from Depto;

select NUM_FUNC, NOME, SALARIO FROM Funcionario;
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '005';
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '004' AND SALARIO > 2000;
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '004' AND SALARIO > 20000;
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '005' AND SALARIO <= 7000;
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '004' AND SALARIO > 600 AND SALARIO < 2000;
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '004';
select NUM_FUNC, NOME, SALARIO FROM Funcionario ORDER BY SALARIO ASC;
select NUM_FUNC, NOME, SALARIO FROM Funcionario WHERE DEPT = '004' ORDER BY SALARIO DESC;
select NUM_FUNC, NOME, SALARIO, DATANAS, BONUS FROM Funcionario WHERE DEPT = '005';
select * FROM Funcionario WHERE NIVEL = 3 ORDER BY NOME;
select * FROM Funcionario WHERE NIVEL = 4 ORDER BY NOME DESC;
select * FROM Funcionario WHERE DEPT = '005' AND SALARIO > 5600 AND SALARIO < 8000;