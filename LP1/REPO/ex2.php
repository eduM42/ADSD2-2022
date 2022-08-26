<?php

$v1 = true;
$v2 = false;

echo "Ordem dos operadores: ==; &&; ||; xor<br>Valor das variáveis: v1 = $v1 e v2 = $v2<br>";
echo $v1 == $v2 ? "<br>Verdadeiro":"<br>Falso";
echo ($v1 && $v2) == true? "<br>Verdadeiro":"<br>Falso";
echo ($v1 || $v2) == true? "<br>Verdadeiro":"<br>Falso";
echo ($v1 xor $v2) == true? "<br>Verdadeiro":"<br>Falso";

?>