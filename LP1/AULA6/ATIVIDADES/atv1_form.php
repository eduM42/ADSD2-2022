<?php
    $nome = $_GET['txtnome'];
    $nascimento = $_GET['txtano'];
    $idade = 2022-$nascimento;

    echo "Olá $nome, sua idade é $idade anos<br>";
    echo "Você nasceu em $nascimento<br>";
    if($idade < 16){
        $minimo = 2022+(16-$idade);
        $obrigatorio = 2022+(18-$idade);
        echo "Não vota<br>Você pode votar a partir de $minimo<br>
        Você terá a obrigação de votar a partir de $obrigatorio";
    }else if($idade >= 18 && $idade <= 70){
        echo "Voto obrigatório<br>";
    }else{
        echo "Voto facultativo<br>";
    }
?>