<?php
    // isset (verifica se a vairável existe e tem valor) e empty (verifica se está vazia)
    if(!isset($_POST['btnenviar'])){
        echo "Os dados não foram enviados";
    }else{
        $nome = $_POST['txtnome'];
        $idade = $_POST['txtidade'];
        $email = $_POST['txtemail'];
        $site = $_POST['txtsite'];
        $mensagem = $_POST['txtmensagem'];


        echo "<h3>Dados do cadastro</h3>";
        echo "Nome: $nome<br>Idade: $idade<br>Email: $email<br>Site: $site<br>";
        echo "<p>Mesagem: $mensagem";

        // APLCIANDO A SANITIZAÇÃO
        echo "<br><br>Nome = ".filter_var($nome, FILTER_SANITIZE_SPECIAL_CHARS);
        echo "Email = ".filter_var($email, FILTER_SANITIZE_EMAIL);

        $erro = [];
        if(empty($nome)){
            $erro[$i++] = "Nome não pode ser vazio";
        }
        if($idade == filter_input(INPUT_POST, $idade, "FILTER_VALIDATE_INT")){
            $erro[$i++] = "Idade inválida";
        }

        echo "<br><br>Nome: $nome<br> Idade: $idade<br> Email: $email";

        echo "Os erros encontrados:";
        foreach($erro as $ver){
            echo $ver."<br>";
        }
    }
?>