<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EX1 - AULA 3</title>
</head>
<body>
    <?php
        $carros = array("Onix", "Jeep", "Corolla", "Civic", "Vectra");
        $cores = array();
        $cores[0] = "amarelo";
        $cores[1] = "roxo";
        $cores[3] = "Azul";
        $cores[2] = "Laranja";
        print_r($carros);
        echo "<br>";
        print_r($cores);
        echo "<br>";
        echo "Eu tenho um carro ".$carros[2]." na cor ".$cores[2];
    ?>
</body>
</html>