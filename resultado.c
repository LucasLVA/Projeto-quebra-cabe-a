#include <stdio.h>
#include <string.h>
#include "resultado.h"
#include "imprime.h"

void calcula_result(int m,int n,char matriz[n][n], char palavras[m][n]){
  int i,j,k,l,cont,achou=0;//0= não, 1= sim

   for(i=0;i<m;i++){ //Para cada palavra
    cont=0;
    achou=0;
    for(j=0;j<n;j++){ //Para cada linha da matriz
      for(k=0;k<n;k++){ //Para cada coluna da matriz
        if (palavras[i][0] == matriz[j][k]){ // Se achou a primeira letra da palavra[i]
          cont=0;
          if(achou){
            break;
          }
          if (palavras[i][1] == matriz[j - 1][k]){ // Se achou a segunda letra no NORTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j - l][k]){ // Vai procurar a palavra inteira no sentido que achou a segunda letra
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_norte(m,n,cont,i,j,k,palavras); // Se achou toda a palavra, vai imprimir
                  achou=1; // variavel lógica para sair do loop e começar a proxima palavra
                }
              }
              else
                break;
            }
          }
          if(achou){ 
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j - 1][k + 1]){ // Se achou a segunda letra no NORDESTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j - l][k + l]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_nordeste(m,n,cont,i,j,k,palavras); // Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j][k + 1]){ // Se achou a segunda letra no LESTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j][k + l]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_leste(m,n,cont,i,j,k,palavras); // Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j + 1][k + 1]){ // Se achou a segunda letra no SUDESTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j + l][k + l]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_sudeste(m,n,cont,i,j,k,palavras); // Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j + 1][k]){ // Se achou a segunda letra no SUL
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j + l][k]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_sul(m,n,cont,i,j,k,palavras);// Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j + 1][k - 1]){ // Se achou a segunda letra no SUDOESTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j + l][k - l]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_sudoeste(m,n,cont,i,j,k,palavras);// Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j][k - 1]){ // Se achou a segunda letra no OESTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j][k - l]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_oeste(m,n,cont,i,j,k,palavras);// Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
          if (palavras[i][1] == matriz[j - 1][k - 1]){ // Se achou a segunda letra no NOROESTE
            for (l = 0; l < strlen(palavras[i]); l++){
              if (palavras[i][l] == matriz[j - l][k - l]){
                cont += 1;
                if(cont == strlen(palavras[i])){
                  imprime_noroeste(m,n,cont,i,j,k,palavras);// Se achou toda a palavra, vai imprimir
                  achou=1;
                }
              }
              else
                break;
            }
          }
          if(achou){
            break;
          }
          cont=0;
        }
      }
    }
  }

}
