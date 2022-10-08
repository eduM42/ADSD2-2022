<?php
    $numeros = array();

    for($i = 0; $i < 100; $i++){
        $numeros[$i] = rand(1,6);
    }

    $ocorrencias = array_count_values($numeros);

    for ($i=1; $i <= 6; $i++) { 
        echo "O número $i possui a frequência de ".$ocorrencias[$i]."<br>";
    }
?>