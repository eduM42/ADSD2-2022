<?php
    // inserir elementos no array
    $carros = array("Onix", "Jeep", "Corolla", "Civic", "Vectra");
    array_unshift($carros, "Fusca");
    print_r($carros);
    echo "<br>";
    array_push($carros, "Cadillac");
?>