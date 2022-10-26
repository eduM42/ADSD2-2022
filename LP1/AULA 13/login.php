<?php
    session_start();

    $usuario = $_POST['txtusuario'];
    $senha = $_POST['txtsenha'];
    
    $db_usuario = 'eduardo';
    $db_senha = '123456';

    if ($usuario == NULL || $senha == NULL || $usuario != $db_usuario || $senha != $db_senha) {
        echo "ACESSO NEGADO";
        header("Location: a13_form.php");
    }else{
        $_SESSION['usuario'] = $usuario;
        header("Location: produtos.php");
    }

?>