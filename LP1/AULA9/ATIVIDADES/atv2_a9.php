<?php
require 'func_conta.php';
    $numeros = array();

    for($i = 0; $i < 100; $i++){
        $numeros[$i] = rand(1,6);
    }
    frequencia($numeros);
?>