<?php
    $altura = 1.83;
    $peso = 63;

    $imc = $peso/($altura*$altura);

    if($imc < 18.5){
        echo "<br>Seu IMC é ".number_format((float)$imc,2).", o que lhe categoriza em magreza";
    }else if($imc >= 18.5 && $imc < 25){
        echo "<br>Seu IMC é ".number_format((float)$imc,2).", o que lhe categoriza em saudável";
    }else if($imc >= 25 && $imc < 30){
        echo "<br>Seu IMC é ".number_format((float)$imc,2).", o que lhe categoriza em sobrepeso";
    }else if($imc >= 30 && $imc < 35){
        echo "<br>Seu IMC é ".number_format((float)$imc,2).", o que lhe categoriza em obesidade grau I";
    }else if($imc >= 35 && $imc < 40){
        echo "<br>Seu IMC é ".number_format((float)$imc,2).", o que lhe categoriza em obesidade grau II";
    }else{
        echo "<br>Seu IMC é ".number_format((float)$imc,2).", o que lhe categoriza em obesidade grau III";
    }
?>