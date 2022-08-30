<?php
    echo "<p>Exibir números de 0 a 12</p>";
    $cont = 0;
    while($cont <= 12){
        echo "$cont ";
        $cont++;
    }

    $cont = 12;
    echo "<p>Contagem regressiva de 12 até 0, contando de 2 em 2</p>";
    while($cont >= 0){
        echo "$cont ";
        $cont -= 2;
    }
?>