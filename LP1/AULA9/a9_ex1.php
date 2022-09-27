<?php
    include 'funcao_tela.php';
    linha(); // Chamando através do include (arquivo 'funcao_tela.php')
    echo "<h2>EXEMPLOS DE FUNÇÃO</h2>";
    linha();

    echo "Função multiplica dois valores internos e exibe o resultado<br>";
    multiplica();
    linha();

    echo "Função recebe dois valores, multiplica os dois valores e mostra o resultado<br>";
    $numero1 = 52;
    $numero2 = 3;
    
    multiplica1($numero1, $numero2);
    linha();

    echo "Função multiplica dois valores internos e retorna o resultado<br>";
    // $calculo = multiplica2();
    // echo "Multiplicação = $calculo<br>";
    echo "Multiplicação = ".multiplica2()."<br>";
    linha();

    echo "Função recebe dois valores, multiplica os dois valores e retorna o resultado<br>";
    // $calculo1 = multiplica3();
    // echo "Multiplicação = $calculo1<br>";
    echo "Multiplicação: ".multiplica3($numero1, $numero2)."<br>";


    //=========DECLEARAÇÃO DAS FUNÇÕES==============

    function multiplica(){ // Valores internos, exibe dentro da função 
        $num1 = 23; 
        $num2 = 4;
        $resultado = $num1*$num2;
        echo "Resultado: $num1 X $num2 = $resultado<br>";
    }

    function multiplica1($n1, $n2){ // Valores externos, exibe dentro da função
        $resultado = $n1*$n2;
        echo "Resultado: $n1 x $n2 = $resultado<br>";
    }

    function multiplica2(){ // Valores internos, exibe fora da função
        $num1 = 3;
        $num2 = 42;
        $resultado = $num1*$num2;
        return $resultado;
    }

    function multiplica3($n1, $n2){ // Valores externos, exibe fora da função
        $resultado = $n1*$n2;
        return $resultado;
    }
?>