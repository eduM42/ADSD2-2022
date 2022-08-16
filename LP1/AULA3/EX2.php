<?php
    // inserir elementos no array
    echo "<pre>";
    $carros = array("Onix", "Jeep", "Corolla", "Civic", "Vectra");
    array_unshift($carros, "Fusca");
    print_r($carros);
    echo "<br>";
    array_push($carros, "Cadillac");
    $carros[3] = "HB20";
    print_r($carros);

    // Remover elementos do array
    echo "<br>";
    array_shift($carros); //remove do início
    print_r($carros);

    echo "<br>";
    array_pop($carros);
    print_r($carros);

    //====================================
    // Ordenação
    echo "<br>Ordem crescente<br>";
    sort($carros);
    print_r($carros);

    echo "<br>Ordem decrescente<br>";
    rsort($carros);
    print_r($carros);

    echo "</pre>";
?>