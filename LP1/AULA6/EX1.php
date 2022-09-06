<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulário 1</title>
</head>
<body>
    <form action="EX1_form.php" method="POST">
        <label>
            Nome: <input type="text" name="txtnome" size="50" maxlength="30" placeholder="Nome completo"/>
        </label>
        <br><br>
        </label>
            Idade: <input type="number" name="txtidade" size="20" maxlength="3" min="0" max="130"/>
        </label>
        <br><br>
        <input type="submit" value="Exibir" name="btnexibir"/>
        <input type="submit" value="Limpar" name="btnlimpar"/>
        <br><br>
    </form>

</body>
</html>