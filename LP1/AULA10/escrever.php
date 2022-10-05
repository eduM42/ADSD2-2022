<?php
    $nome = $_POST['txtNome'];
    $msg = $_POST['txtMsg'];
    $conteudo = $nome."\r\n".$msg."\r\n";

    $arquivo = fopen("mensagens.txt", "a");
    fwrite($arquivo, $conteudo);
    fclose($arquivo);
    echo "<hr><br>MENSAGEM GRAVADA COM SUCESSO<br>";
    echo "<a href='a10_form.php'>Nova mensagem</a><br>";
    echo "<a href='exibe_msg.php'>Lista mensagens></a><br>";

?>