<?php
    $numeros = array();
    for($i = 0; $i < 15; $i++){
        $numeros[$i] = rand(0,20);    
    }

    foreach($numeros as $num){
        echo "Número = $num <br>";
        $soma += $num;
        
    }
    echo "<br>";
    sort($numeros);
    foreach($numeros as $ord){
        echo "Ordenado = $ord <br>";
    }
    
    $mediana = $numeros[7];
    $media = $soma/15;

    echo "<br>Media = $media<br>";
    echo "<br>Mediana = $mediana<br>";
?>
