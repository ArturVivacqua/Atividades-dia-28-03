//Exercício 1
#include <stdio.h>

int main(void) {
  int i, n;
  printf("\nDigite um número natural:\t");
  scanf("%d", &n);

  for(i = 0; i <= n; i++){
    printf("%d:", i); 
  }
 
  return 0;
}