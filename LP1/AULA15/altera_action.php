<?php
    include_once 'cabecalho.php';
    include_once 'conexao.php';
    
    $codigo = $_POST['txtid'];
    $nome = $_POST['txtnome'];
    $sobrenome = $_POST['txtsobrenome'];
    $fone  = $_POST['txtfone'];
    $data = $_POST['txtdatanasc'];

    $altera = $conecta -> prepare("UPDATE tab_clientes SET cli_nome  = :nome, cli_sobrenome = :sobrenome, cli_fone = :fone, cli_data_nasc = :dt_nasc WHERE cli_id = :codigo");

    $altera -> bindValue(':nome', $nome);
    $altera -> bindValue(':sobrenome', $sobrenome);
    $altera -> bindValue(':fone', $fone);
    $altera -> bindValue(':dt_nasc', $data);
    $altera -> bindValue(':codigo', $codigo);
    
    $altera -> execute();

    header('Location: listagem_clientes.php');

    include_once 'rodape.php';
    ?>