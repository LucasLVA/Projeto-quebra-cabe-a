#include <stdio.h>
#include <string.h>
#include "leitura.h"
#include "resultado.h"
#include "imprime.h"

int main(void) {
  int n,m,i,j;
  printf("Digite o tamanho do caça palavras e o número de palavras a serem encontradas:\n");
  printf("Por exemplo: 10 6\n");
  scanf("%d %d",&n,&m); // Pega tamanho da matriz e n. de palavras

  char matriz[n][n],palavras[m][n];
  
  printf("Digite cada uma das palavras separadas por enter: \n");
  le_palavra(m, n, palavras); // Função de leitura  
  printf("Digite o caça palavras\n");
  le_matriz(n,matriz); // Função de leitura
  calcula_result( m, n, matriz, palavras); // Função de resultado
  // Função de impressão está sendo chamada dentro do resultado
  return 0;
}