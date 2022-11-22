library(readxl)
library(gmodels)
library(stringr)

gen_table <- function(vet1, vet2, linhas, colunas, cont_el1, cont_el2){
    # Inicia variáveis
    res = array(c(0,0,0,0), dim = c(2,2))
    # Conta os elementos que se encaixam no esperado, ex: "yes"
    r_vet1 = str_count(vet1, cont_el1) 
    r_vet2 = str_count(vet2, cont_el2)

    # Armazena para cada posição na tabela a contagem dos elementos
    for(x in 1:linhas){
        if(r_vet1[x] == 0 && r_vet2[x] == 0){
            res[1,1] = res[1,1] + 1
        }else if(r_vet1[x] == 0 && r_vet2[x] == 1){
            res[1,2] = res[1,2] + 1
        }else if(r_vet1[x] == 1 && r_vet2[x] == 0){
            res[2,1] = res[2,1] + 1
        }else if(r_vet1[x] == 1 && r_vet2[x] == 1){
            res[2,2] = res[2,2] + 1
        }
    }
    return(res)
}

get_calc <- function(table, l, c, dataset_n, dep = FALSE){
    # Inicia variáveis
    total_cmp = l*c
    qui_total = 0
    esp = array(c(0,0,0,0), dim = c(l,c))
    qui = array(c(0,0,0,0), dim = c(l,c))
    total_lin = vector("integer", l)
    total_col = vector("integer", c)
    porcent_lin = vector("numeric", l)
    porcent_col = vector("numeric", c)

    # Calcula os totais das linhas e colunas
    for(x in 1:l){
        for(y in 1:c){
            total_lin[x] = total_lin[x] + table[x,y] 
        }
    }
    for(x in 1:c){
        for(y in 1:l){
            total_col[x] = total_col[x] + table[y,x] 
        }
    }
    # Calcula as porcentagens totais das linhas e colunas
    for(x in 1:l){
        porcent_lin[x] = ((total_lin[x]*100)/dataset_n)/100
    }
    for(x in 1:c){
        porcent_col[x] = ((total_col[x]*100)/dataset_n)/100
    }

    # Calcula os valores esperados e os coloca em uma matriz
    for(x in 1:c){
        for(y in 1:l){
            esp[x,y] = total_lin[x]*porcent_col[y]
        }
    }
    
    # Calcula os valores de qui para cada valor
    for(x in 1:l){
        for(y in 1:c){
            qui[x,y] = ((table[x,y] - esp[x,y])^2)/esp[x,y]
        }
    }

    # Soma os valores de qui para obter o qui^2
    for(x in 1:l){
        for(y in 1:c){
            qui_total = qui_total + qui[x,y]
        }
    }

    # Calcula os coeficientes C e T
    coef_c = sqrt(qui_total/(qui_total+dataset_n))
    coef_t = sqrt((qui_total/dataset_n)/((l-1)*(c-1)))

    if(dep == TRUE){
        print(paste("Tabela gerada: "))
        print(table)
        print(paste("Valores esperados: "))
        print(esp)
        print("Qui^2 de cada valor: ")
        print(qui)
        print(paste("Totais: "))
        print(paste("Total col 1: ", total_col[1]))
        print(paste("Total col 2: ", total_col[2]))
        print(paste("Total lin 1: ", total_lin[1]))
        print(paste("Total lin 2: ", total_lin[2]))
        print(paste("resultados: "))
        print(paste("Qui^2 total: ", qui_total))
        print(paste("Coeficiente C: ", coef_c))
        print(paste("Coeficiente T: ", coef_t))
    }
    res <- c(qui_total, coef_c, coef_t)
    return (res)
}

t <- read_excel("~/R/plor.xlsx")
tabela1 <- gen_table(t$famsup, t$nursery, 395, 2, "yes", "yes")
tabela2 <- gen_table(t$activities, t$higher, 395, 2, "yes", "yes")
calc1 <- get_calc(tabela1, 2, 2, 395)
calc2 <- get_calc(tabela2, 2, 2, 395)

CrossTable(t$famsup, t$nursery, digits = 2, max.width = 3, prop.chisq = TRUE, chisq = TRUE, prop.r = TRUE, prop.c = TRUE, prop.t = TRUE)
CrossTable(t$activities, t$higher, digits = 2, max.width = 3, prop.chisq = TRUE, chisq = TRUE, prop.r = TRUE, prop.c = TRUE, prop.t = TRUE)

print(paste("Relação Famsup X Nursery"))
print(paste("Qui^2: ", calc1[1]))
print(paste("Coeficiente C: ", calc1[2]))
print(paste("Coeficiente T: ", calc1[3]))
print(paste(""))
print(paste(""))
print(paste("Relação Activities X Higher"))
print(paste("Qui^2: ", calc2[1]))
print(paste("Coeficiente C: ", calc2[2]))
print(paste("Coeficiente T: ", calc2[3]))