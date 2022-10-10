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
    <?php
        $tipo = $_POST['tpinvest'];
        $valor = $_POST['valor'];

        calcrendimento($tipo, $valor);

        function calcrendimento($tp, $val){
            $rendimento = array();
            $rendimento[0] = $val;
            $invest = "";
            $m = 1;
            if($tp == 1){
                for ($i=1; $i < 12; $i++) { 
                    $rendimento[$i] = $rendimento[$i-1]*1.3;
                    $invest = "Poupança";
                }
            }else if($tp == 2){
                for ($i=1; $i < 12; $i++) { 
                    $rendimento[$i] = $rendimento[$i-1]*1.4;
                    $invest = "Fundo de renda fixa";
                }
            }else{
                echo "Opção inválida!!!";
            }
            echo "Valor inicial do investimento: $val<br>";
            echo "Tipo de investimento selecionado: $invest<br><br>";
            foreach ($rendimento as $r) {
                echo "Valor no $m º mês: R\$ $r<br>";
                $m++;
            }

        }
    ?>
</body>
</html>