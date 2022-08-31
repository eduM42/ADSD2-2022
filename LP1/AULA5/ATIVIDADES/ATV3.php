<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Atividade 1</title>
</head>
<body>
<form action="">
    <input type="text" name="n1" placeholder="Insira um número qualquer"/>
    <button type="submit" value="n1">Enviar</button>
</form>

    <?php
        $numero = $_GET['n1'];
        $fatorial = array_product(range($numero, 1));

        
        echo "<br>Resultado do fatorial de $numero é ";
        print_r($fatorial);
    ?>
</body>
</html>