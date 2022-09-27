<?php
    require 'funcao_tela.php';
    $numeros = [3.5, 8, 10, 12, "Joana", True];
    linha(70, "=");
    echo "<h2>Exemplo de funções</h2>";
    linha(70, "-");
    echo "Soma = ".soma($numeros)."<br>";

    linha(70, "#");
    echo "Soma = ".soma1(5, 8, 9.2, 4.7)."<br>";
    
    linha(60, "=");
    // Função anônima
    $mensagem = function(){
        date_default_timezone_set('America/Sao_Paulo');
        echo "Hoje é: ".date('d/m/y - H:i:s')."<br>";
        $hora = date('H');
        if($hora > 0 && $hora <= 12){
            echo "Bom dia!<br>";
        }elseif($hora > 12 && $hora < 18){
            echo "Boa tarde!<br>";
        }else{
            echo "Boa noite!<br>";
        }
    };
    echo $mensagem();
    

    /***********************DECLARAÇÃO DAS FUNÇÕES***********************/

    function soma($vetor = array()){
        $resultado = 0;
        foreach ($vetor as $v) {
            echo $v."<br>";
        }
        
        foreach ($vetor as $v) {
            if(is_int($v) || is_float($v))
                $resultado += $v;
            continue;
        }
        return $resultado;
    }

    function soma1(float ...$vetor):int{
        $resultado = 0;
        foreach ($vetor as $v) {
            if(is_int($v) || is_float($v))
                $resultado += $v;
            continue;
        }
        return $resultado;
    }

?>