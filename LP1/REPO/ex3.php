<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="ex3.php">
        <input type="text" name="idade" placeholder="Insira a idade"/>
        <button type="submit" value="idade">VERIFICAR</button>
    </form>
    <?php
        $idade = $_GET['idade'];
        if($idade < 16){
            echo "Esta pessoa não tem idade para votar";
        }else if(($idade >= 16 && $idade < 18) || $idade > 65){
            echo "Esta pessoa pode votar, mas o voto é facultativo";
        }else if($idade >= 18 && $idade <= 65){
            echo "Esta pessoa pode votar e o voto é obrigatorio";
        }
    ?>
    
</body>
</html>