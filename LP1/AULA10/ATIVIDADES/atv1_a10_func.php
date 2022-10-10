<?php
    $nome = $_GET['txtnome'];
    $turma = $_GET['txtturma'];
    $prontuario = $_GET['txtpront'];

    registro($nome, $turma, $prontuario);
    vizualizar();

    function registro($nome, $turma, $pront){
        $arquivo = fopen("tb_exercicio1.txt", "w");
        $msg = "Nome: $nome\r\nTurma: $turma\r\nProntuário: $pront\r\n";
        fwrite($arquivo, $msg);
        fclose($arquivo);
    }

    function vizualizar(){
        $arquivo = fopen("tb_exercicio1.txt", "r");
    
        while(!feof($arquivo)){
            echo fgets($arquivo)."<br>";   
        }
        echo "<hr>";

        fclose($arquivo);
        echo "<a href='atv1_a10.php'>Voltar</a>";
    }
?>