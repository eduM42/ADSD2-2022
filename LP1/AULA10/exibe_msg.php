<?php
    $arquivo = fopen("mensagens.txt", "r");
    
    while(!feof($arquivo)){
        echo fgets($arquivo)."<br>";
        echo fgets($arquivo)."<br>";
        echo "<hr>";
    }

    fclose($arquivo);
    echo "<a href='a10_form.php'>Voltar</a>";

    
?>