<?php
    echo "<h1>Estruturas de repetição</h1>";
    echo "<h2>Usando while</h2>";
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

    echo "<h2>Usando do... while</h2>";
    echo "<p>Exibir números de 0 a 12</p>";
    $cont = 0;
    do{
        echo "$cont ";
        $cont++;
    }while($cont <= 12);

    echo "<p>Contagem regressiva de 12 até 0, contando de 2 em 2</p>";
    $cont = 12;
    do{
        echo "$cont ";
        $cont -= 2;
    }while($cont >= 0);

    echo "<h2>Usando o for</h2>";
    echo "<p>Exibir números de 0 a 12</p>";
    for($cont = 0; $cont <= 12; $cont++){
        echo "$cont ";
    }

    echo "<p>Contagem regressiva de 12 até 0, contando de 2 em 2</p>";
    for($cont = 12; $cont >= 0; $cont-=2){
        echo "$cont ";
    }

    echo "<h2>Usando foreach</h2>";
    echo "<p>Array indexado</p>";
    $carros = array("Corolla", "Versa", "Jeep", "Ônix");
    foreach($carros as $car){
        echo "$car<br>";
    }
    echo "<p>Array associativo</p>";
    $frutas = array("fruta1" => "mamão", "fruta2" => "abacaxi", "fruta3" => "morango",
    "fruta4" => "laranja");
    foreach($frutas as $ft => $fruta){
        echo "$ft - $fruta<br>";
    }
?>