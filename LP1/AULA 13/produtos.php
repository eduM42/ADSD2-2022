<?php
    session_start();
    echo "<h3>PRODUTOS EM PROMOÇÃO</h3>";
    $nome = $_SESSION['usuario'];
    echo "Seja bem vindo " . strtoupper($nome);
    echo "<table width='80%' align='center'>";
    echo "<tr align='center'><td><a href='a13_cookie1.php?prod=1'><img src='img/tenis1.jpg' alt='Tênis para corrida'><br>Tênis para corrida</a><br>R$ 400,00";
    echo "</td>";
    echo "<td>";
    echo "<a href='a13_cookie1.php?prod=2'><img src='img/tenis2.jpg' alt='Tênis para o dia a dia'><br>Tênis para o dia a dia</a>";
    echo "</td>";
    echo "<td>";
    echo "<a href='a13_cookie1.php?prod=3'><img src='img/tenis3.jpg' alt='Tênis para treino'><br>Tênis para treino</a>";
    echo "</td></tr>";
    echo "<tr align='center'><td><a href='a13_cookie1.php?prod=4'><img src='img/tenis4.jpg' alt='Tênis para corrida '><br>Tênis para corrida</a>";
    echo "</td>";
    echo "<td><a href='a13_cookie1.php?prod=5'><img src='img/tenis5.jpg' alt='Chuteira campo'><br>Chuteira campo</a>";
    echo "</td>";
    echo "<td><a href='a13_cookie1.php?prod=6'><img src='img/tenis6.jpg' alt='Tênis para corrida e academia'><br>Tênis para corrida e academia</a>";
    echo "</td>";
?>