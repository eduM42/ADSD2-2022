<?php
   require_once 'conexao.php';

   if(isset($_POST['btncadastrar'])){
      $nome = filter_input(INPUT_POST,'txtnome');
      $sobrenome = filter_input(INPUT_POST, 'txtsobrenome');
      $fone = filter_input(INPUT_POST, 'txtfone');
      $data = filter_input(INPUT_POST, 'txtdatanasc');
    //  $data= '2005-12-26';

      $sql = $conecta->prepare("INSERT into tab_clientes (cli_nome, cli_sobrenome, cli_fone, cli_data_nasc) VALUES (:nome,:sobrenome,:fone,:dt)");
      $sql->bindValue(':nome',$nome);
      $sql->bindValue(':sobrenome',$sobrenome);
      $sql->bindValue(':fone', $fone);
       $sql->bindValue(':dt', $data);
      $sql->execute();
      header('Location:listagem_clientes.php');
   }
   echo "$nome $sobrenome $data $fone";

?>
