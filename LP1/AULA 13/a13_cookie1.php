<?php
   session_start();
    $produto = $_GET['prod'];
  //setcookie()
  if(isset($produto)){
    echo "<h3>Dados do produto selecionado:</h3>";
    echo "Código: $produto<br>";
    echo "<img src='img/tenis$produto.jpg'><br>";
   switch ($produto) {
      case 1:
     
      $tenis = 'Tênis para corrida';
      $preco = 400;
         break;
      case 2:
         $tenis = 'Tênis para o dia a dia';
         $preco = 400;
         break;
      case 3:
         $tenis = 'Tênis para treino';
         $preco = 400;
         break;
      case 4:
         $tenis = 'Tênis para corrida';
         $preco = 400;
         break;
      case 5:
         $tenis = 'Chuteira campo';
         $preco = 400;
         break;
      case 6:
         $tenis = 'Tênis para corrida e academia';
         $preco = 400;
         break;
      default:
         $tenis = "nenhum tênis selecionado";
         $preco = 0;
         break;
   }
  echo "$tenis e <br> R$ $preco";
  echo "<br><br><a href='a13_produto.php'>FINALIZAR COMPRA</a>";
  setcookie("usuario", $_SESSION['usuario'], 3600);
  setcookie("descricao", $tenis, 3600);
  setcookie("preco", $preco, 3600);

  }
  else{
   $tenis = "nenhum tênis selecionado<br>";
   $preco = 0;
  }
  setcookie("produto", $produto, time()+3600);
  setcookie("descricao", $tenis, time()+3600);
  setcookie("preco", $preco, time()+3600);
  setcookie("usuario", $_SESSION['usuario'], time()+3600);

?>
