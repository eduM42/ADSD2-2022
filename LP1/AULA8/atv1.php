<?php
    $numeros = array();
    for($i = 0; $i < 15; $i++){
        $numeros[$i] = rand(0,20);
        echo "Posição $i = ".$numeros[$i]."<br>";
    }
    
    echo "<br>";
    

    echo "<br>Media = ".media($numeros)."<br>";
    echo "<br>Mediana = ".mediana($numeros)."<br>";
    echo "<br>Valor mais frequente =".moda($numeros);



    function media($vetor){
        $soma = 0;
        foreach($vetor as $num){
            $soma += $num;
        }
        $media = $soma/15;
        return $media;
    }

    function mediana($vetor){
        sort($vetor);
        $mediana = $vetor[7];
        return $mediana;
    }

    function moda ($v){
        sort($v);
        $contaValoresRepetidos = array_count_values($v);
        $Valormax = max($contaValoresRepetidos);
        foreach ($contaValoresRepetidos as $moda => $repeteValor){
            if ($repeteValor == $Valormax){
                return $moda;
            }
        }
    }
?>