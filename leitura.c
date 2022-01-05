#include <stdio.h>
#include <string.h>
#include "leitura.h"

void le_matriz(int n, char matriz[n][n]){
  int i;

  for(i=0;i<n;i++){
    scanf("%s",&matriz[i][0]);
  }
}

void le_palavra (int m,int n, char palavras[m][n]){
  int i;

  for(i=0;i<m;i++){
    scanf("%s",palavras[i]);
  }
}