<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="#" method="get">
        <label>Número 1
            <input type="number" name="txtnumero1" autofocus><br>
        </label>
        <input type="submit" name="Calcular" name="btncalcular">

    </form>
    <?php
        $numeros = array();
        if(empty($_POST['txtnumero1'])){
            echo "Digite o valor.";
        }else{
            $valor = $_POST['txtnumero1'];
            $numeros = gera_vetor($valor);
            exibe_vetor($numeros);
        
        }

        //Declaração das funções
        function gera_vetor($tam){
            $vetor = array();
            for($i = 0; $i < $tam; $i++){
                $vetor[$i] = rand(1, 20);
            }
        }
        function exibe_vetor($v){
            foreach($v as $numero){
                echo $numero." - ";
            }
        }
    ?>
</body>
</html>