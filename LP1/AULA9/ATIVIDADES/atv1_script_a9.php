<?php
    $numero = $_GET['txtnumero'];

    echo "O valor é: ".pn($numero)."<br>";

    function pn($valor){
        if($valor > 0){
            return 'P';
        }
        else{
            return 'N';
        }
    }
?>