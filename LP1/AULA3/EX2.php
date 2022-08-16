<?php
    // inserir elementos no array
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
?>