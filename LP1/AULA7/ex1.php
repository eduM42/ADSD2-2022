<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EX1</title>
</head>
<body>
    <form action="envia_dados.php" method="post">
        <label>Nome:
        <input type="text" name="txtnome"  > <br>
        </label>
        <br><br>
    <label">Idade:
        <input type="number" name="txtidade"  > <br>
        </label>
        <br><br>
    <label>Site:
        <input type="url" name="txtsite"  > <br>
        </label>
        <br><br>
    <label>Email: 
        <input type="text" name="txtemail"  > <br>
        </label>
        <br><br>
    <label>Mensagem: </label>
        <textarea name="txtmensagem" ></textarea> <br>
        
        <input type="submit" value="Enviar" name="btnenviar">
    </form>
</body>
</html>
