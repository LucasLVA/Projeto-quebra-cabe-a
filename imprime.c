#include <stdio.h>
#include <string.h>
#include "leitura.h"
#include "resultado.h"

void imprime_norte(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(j=j-strlen(palavras[i])+1; cont < strlen(palavras[i]); j++){
    cont++;
    printf(" (%d,%d)",j,k);
  }
}
void imprime_nordeste(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(j=j; cont < strlen(palavras[i]); j--){
    cont++;
    printf(" (%d,%d)",j,k);
    k++;
  }
}
void imprime_leste(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(k=k; cont < strlen(palavras[i]); k++){
    cont++;
    printf(" (%d,%d)",j,k);

  }
}
void imprime_sudeste(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(k=k; cont < strlen(palavras[i]); k++){
    cont++;
    printf(" (%d,%d)",j,k);
    j++;
  }
}
void imprime_sul(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(j=j; cont < strlen(palavras[i]); j++){
    cont++;
    printf(" (%d,%d)",j,k);
  }
}
void imprime_sudoeste(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(j=j; cont < strlen(palavras[i]); j++){
    cont++;
    printf(" (%d,%d)",j,k);
    k--;
  }
}
void imprime_oeste(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  for(k=k-strlen(palavras[i])+1; cont < strlen(palavras[i]); k++){
    cont++;
    printf(" (%d,%d)",j,k);
  }
}
void imprime_noroeste(int m, int n,int cont,int i,int j,int k, char palavras[m][n]){
  cont=0;
  printf("\n%s",palavras[i]);
  j=j-strlen(palavras[i])+1;
  for(k=k-strlen(palavras[i])+1; cont < strlen(palavras[i]); k++){
    cont++;
    printf(" (%d,%d)",j,k);
    j++;
  }
}
