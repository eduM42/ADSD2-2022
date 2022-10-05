<?php
    /*
    fopen()
    fwrite()
    fclose()
    fgets()
    unlink()
    ftruncate()
    */

    // Leitura do arquivo
    $arquivo = fopen("a10_tb.txt", "a");
    echo "Arquivo criado com sucesso!<br>";
    
    // Inserindo conteúdo no arquivo
    $texto = "Boa noite\r\n";
    fwrite($arquivo, $texto);
    fclose($arquivo);

    // Exibir o conteúdo do arquivo
    $arquivo = fopen("a10_tb.txt", "r");
    while(!feof($arquivo)){
        echo fgets($arquivo)."<br>";
    }

    // Fechando arquivo
    fclose($arquivo);


    //================================ Criando o arquivo 2 ================================//

    $texto = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    $arquivo2 = fopen("texto2.txt", "w+");
    fwrite($arquivo2, $texto);
    echo file_get_contents("texto2.txt");
    

?>