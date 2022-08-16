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
    echo "<h3>Ordem crescente</h3>";
    sort($carros);
    print_r($carros);

    echo "<h3>Ordem decrescente</h3>";
    rsort($carros);
    print_r($carros);


    //Ordem ascendente
    echo "<h3>Ordem ascendente dos elementos</h3>";
    $carro = array("modelo" => "Onix", "cor" => "vermelho", "ano" => 2021, "valor" => "R$80000");
    asort($carro);
    print_r($carro);

    echo "<h3>Ordem ascendente das chaves</h3>"
    ksort($carro);
    print_r($carro);

    echo "</pre>";
?>