<?php
    function frequencia($valores=array()){
        $ocorrencias = array_count_values($valores);

        for ($i=1; $i <= 6; $i++) { 
            echo "O número $i possui a frequência de ".$ocorrencias[$i]."<br>";
        }
    }
?>