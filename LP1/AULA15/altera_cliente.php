<?php
require_once "conexao.php";
include_once "cabecalho.php";


$id = $_GET['id'];

$consulta = $conecta->prepare('SELECT * FROM tab_clientes WHERE cli_id = :id');
$consulta->bindValue(':id', $id);
$consulta->execute();

$linha = $consulta->fetch(PDO::FETCH_ASSOC);
?>

<div class="row">
   <div class="col s12 m6 push-m3">
      <h3 class="light">Alterando clientes</h3>
      <?php echo "Cliente: {$linha['cli_id']}"; ?>
      <form action="altera_action.php" method="post">
         <input type="hidden" name="txtid" value="<?php echo "{$linha['cli_id']}<br>"; ?>">
         <div class="input-field col s12">
            <label for="nome">Nome: </label><br>
            <input type="text" name="txtnome" id="nome" value="<?php echo "{$linha['cli_nome']}"; ?>">

         </div>
         <div class="input-field col s12">
            <label for="sobrenome"> Sobrenome: </label><br>
            <input type="text" name="txtsobrenome" id="sobrenome" value="<?php echo "{$linha['cli_sobrenome']}"; ?>">

         </div>
         <div class=" input-field col s12">
            <label for="fone">Telefone: </label><br>
            <input type="text" name="txtfone" id="fone" value="<?php echo "{$linha['cli_fone']}"; ?>">
         </div>
         <div class=" input-field col s12">
            <label for="data">Data Nascimento: </label><br>
            <input type="date" name="txtdatanasc" id="data" value="<?php echo "{$linha['cli_data_nasc']}"; ?>">

         </div>
         <button type=" submit" class="btn" name="btnalterar">Alterar </button>
         <a href="lista.php" class="btn green">Listar clientes</a>
      </form>

   </div>
</div>
   <?php
     include_once "rodape.php";
?>
