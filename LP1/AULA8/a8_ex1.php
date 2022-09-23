<!DOCTYPE html>
    <html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Funções - Exemplo 1</title>
    </head>
    <body>
        <form action="#" method="get">
            <label>Número 1
                <input type="numbber" name="txtnumero1" autofocus><br>
            </label>
            <label>Número 2
                <input type="number" name="txtnumero2"><br>
            </label>
            <input type="submit" value="Calcular" name="btncalcular">
        </form>
        <?php
            if(empty('txtnumero1') || empty('txtnumero2')){
                echo "Digite os valores";
            }else{
                $valor1 = $_GET['txtnumero1'];
                $valor2 = $_GET['txtnumero2'];
                $resultdo = soma($valor1, $valor2);
                echo "Resultado = $resultado";
            }

            //Definição das funções
            function soma($v1, $v2){
                $soma = 0;
                $soma = $v1 + $v2;
                return $soma;
            }
        ?>
    </body>
</html>