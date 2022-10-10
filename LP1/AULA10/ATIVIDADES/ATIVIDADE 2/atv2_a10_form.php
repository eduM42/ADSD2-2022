<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ATIVIDADE AULA 10</title>
</head>
<body>
    <h2>Cálculo de rendimento</h2>
    <p>Escolha o tipo de rendimento e insira o valor do investimento inicial:</p>
    <table border="1">
        <tr>
            <th>TIPO</th>
            <th>DESCRIÇÃO</th>
            <th>RENDIMENTO MENSAL</th>
        </tr>
        <tr>
            <td>1</td>
            <td>Poupança</td>
            <td>3%</td>
        </tr>
        <tr>
            <td>2</td>
            <td>Fundo de renda fixa</td>
            <td>4%</td>
        </tr>
    </table>
    <br>
    <form action="atv2_a10.php" method="POST">
        <label>Tipo de investimento:<br>
            <input type="number" name="tpinvest" placeholder="1 ou 2">
        </label><br><br>
        <label>Valor inicial:<br>
            <input type="number" name="valor" placeholder="Valor inicial">
        </label>
        <p>
            <input type="submit" name="Enviar">
            <input type="reset" name="Limpar">
        </p>
    </form>
</body>
</html>