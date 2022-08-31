<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Atividade 1</title>
</head>
<body>
<form action="">
    <input type="text" name="n1" placeholder="Insira o primeiro número"/>
    <input type="text" name="n2" placeholder="Insira o segundo número"/>
    <button type="submit" value="n1;n2">Enviar</button>
</form>

    <?php
        $n1 = $_GET['n1'];
        $n2 = $_GET['n2'];

        if($n1 - $n2 > 10){
            for($i = 0; $i < 10; $i++){
                $val[$i] = rand($n1,$n2);
            }
        }else if($n2 - $n1 > 10){
            for($i = 0; $i < 10; $i++){
                $val[$i] = rand($n2,$n1);
            }
        }else{
            echo "<br>Não foi possível realizar a operação<br>";
        }

        $vm = 0;
        for($i = 0; $i < 10; $i++){
            echo " $val[$i] ";
            $total += $val[$i];
            if($val[$i] > $vm){
                $vm = $val[$i];
            }
        }
        echo "<br><br>Soma = $total";
        echo "<br>Média = ".$total/10;
        echo "<br>Valor maior = $vm";
    ?>    
</body>
</html>

