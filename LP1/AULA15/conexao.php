<?php
    $conecta = new PDO("mysql:dbname=exemplo_db; host=localhost", "root", "");
    try{
        $conecta -> setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    }catch(PDOException $e){
        echo 'ERROR'.$e->getMessage();
    }
    echo "conexão ok";
?>