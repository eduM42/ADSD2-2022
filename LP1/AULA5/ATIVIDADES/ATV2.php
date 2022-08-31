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
        $base = $_GET['n1'];
        $expoente = $_GET['n2'];
        $res = $base;

        for($i = 1; $i < $expoente; $i++){
            $res = $base*$res;
        }

        echo "<br>Resultado de $base elevado a $expoente = $res";
    ?>
</body>
</html>