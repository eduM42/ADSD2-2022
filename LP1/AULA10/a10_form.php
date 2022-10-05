<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method="post" action="escrever.php">
        <h3>Criando arquivo</h3>
        <label>
            Nome: <br>
            <input type="text" name="txtNome" maxlength="30" size="30" placeholder="Nome do usuário"><br>
        </label>
        <label>
            Mensagem: <br>
            <input type="text" name="txtMsg" maxlength="100" size="30" placeholder="Mensagem"><br>
        </label>
        <p><input type="submit" value="Enviar"></p>
        <p><input type="reset" value="Limpar"></p>
    </form>
</body>
</html>