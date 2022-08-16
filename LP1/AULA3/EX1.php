<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EX1 - AULA 3</title>
    <style>
    </style>
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
        echo "<hr>";
        // Array associativo
        // array_name = array("chave1" => valor, "chave2" => valor, ...);

        $dadospessoais = array("nome" => "Mario", "idade" => 30, "altura" => 1.86, "peso" => "98.0 kg");
        echo "<br><br>";
        print_r($dadospessoais);
        echo "<br><h3>DADOS PESSOAIS</h3><br>";
        echo "Nome: ".$dadospessoais["nome"]."<br>";
        echo "Idade: ".$dadospessoais["idade"]."<br>";
        echo "Altura: ".$dadospessoais["altura"]."<br>";
        echo "Peso: ".$dadospessoais["peso"]."<br>";

        // Array multidimensional
        $alunos = array(
                array("Karla", "A", "12345-X",8.9),
                array("Murilo", "C", "1222-9", 8.0),
                array("Ana", "B", "12346-1", 10.0)
        );
        echo "<pre>";
        echo "<br>";
        print_r($alunos);
        echo "</pre>";
        echo "Nome: ".$alunos[2][0]."<br>";
        echo "Turma: ".$alunos[2][1]."<br>";
        echo "Prontuário: ".$alunos[2][2]."<br>";
        echo "Nota: ".$alunos[2][3]."<br>";
    ?>
</body>
</html>