library(readxl)
library(gmodels)
library(stringr)

qui_quad <- function(vet1, vet2, elemento1, elemento2, dep = FALSE){
  yes_v1 = 0
  no_v1 = 0
  yes_v2 = 0
  no_v2 = 0
  
  ss = 0
  sn = 0
  ns = 0
  nn = 0
  
  vet1 = str_count(vet1, elemento1)
  vet2 = str_count(vet2, elemento1)
  
  for (v in vet1) {
    if(v == 1){
      yes_v1 = yes_v1 + 1
    }else{
      no_v1 = no_v1 + 1
    }
  }
  
  for (v1 in vet2) {
    if(v1 == 1){
      yes_v2 = yes_v2 + 1
    }else{
      no_v2 = no_v2 + 1
    }
  }
  
  for(x in 1:395){
    if(vet1[x] == 1 && vet2[x] == 1){
      ss = ss + 1
    }else if(vet1[x] == 1 && vet2[x] == 0){
      sn = sn + 1
    }else if(vet1[x] == 0 && vet2[x] == 1){
      ns = ns + 1
    }else{
      nn = nn + 1
    }
  }
  
  total_y = yes_v1 + yes_v2
  total_n = no_v1 + no_v2
  
  total_l1 = nn + ns
  total_l2 = sn + ss
  
  porcent_l1 = ((total_l1*100)/395)/100
  porcent_l2 = ((total_l2*100)/395)/100
  
  por_col1 = (((nn + sn)*100)/395)/100
  por_col2 = (((ns + ss)*100)/395)/100
  
  esp_nn = total_l1*por_col1
  esp_sn = total_l2*por_col1
  
  esp_ns = total_l1*por_col2
  esp_ss = total_l2*por_col2
  
  
  
  qui_nn = ((nn - esp_nn)^2)/esp_nn
  qui_sn = ((sn - esp_sn)^2)/esp_sn
  qui_ns = ((ns - esp_ns)^2)/esp_ns
  qui_ss = ((ss - esp_ss)^2)/esp_ss
  
  qui_total = qui_nn + qui_sn + qui_ns + qui_ss
  
  coef_c = sqrt(qui_total/(qui_total+395))
  coef_t = sqrt((qui_total/395)/1)
  
  
  
  res <- c(qui_nn, qui_sn, qui_ns, qui_ss, qui_total, coef_c, coef_t)
  
  if(dep == TRUE){
    
    print(paste("Esperado 1,1: ", esp_nn))
    print(paste("Esperado 1,2: ", esp_sn))
    print(paste("Esperado 2,1: ", esp_ns))
    print(paste("Esperado 2,2: ", esp_ss))
    print(paste(""))
    print(paste("Qui de 1,1: ", qui_nn))
    print(paste("Qui de 1,2: ", qui_sn))
    print(paste("Qui de 2,1: ", qui_ns))
    print(paste("Qui de 2,2: ", qui_ss))
    print(paste(""))
    print(paste("Coeficiente C: ", coef_c))
    print(paste("Coeficiente T: ", coef_t))
  }
  
  return(res)
  
}

cont_occr <- function(vet1, vet2){
  vet1 = str_count(vet1, "yes")
  vet2 = str_count(vet2, "yes")
  
  return(cor.test(vet1, vet2, method = "pearson"))
}

t <- read_excel("/home/pr/plor.xlsx")

denttable1 <- qui_quad(t$famsup, t$nursery, "yes", "no", TRUE)
denttable2 <- qui_quad(t$activities, t$higher, "yes", "no", TRUE)

corr_fs_nr <- cont_occr(t$famsup, t$nursery)
corr_ac_hi <- cont_occr(t$activities, t$higher)

print(paste("Correlação famsup com nursery: ", corr_fs_nr))
print(paste(""))
print(paste(""))
print(paste("Correlação activities com higher: ", corr_ac_hi))


CrossTable(t$famsup, t$nursery, digits = 2, max.width = 3, chisq = TRUE)
CrossTable(t$activities, t$higher, digits = 2, max.width = 3, chisq = TRUE)
