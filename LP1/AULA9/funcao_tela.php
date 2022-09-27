<?php
    function linha($qtd = 50, $char = "*"){
        for ($i=1; $i < $qtd; $i++) { 
            echo "$char";
        }
        echo "<br>";
    }
?>