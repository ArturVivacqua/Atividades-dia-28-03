//Exercício 2
#include <stdio.h>

int main(void) {
  int i, n;
  printf("\nDigite um número natural:\t");
  scanf("%d", &n);

  for(i = n; i >= 0; i--){
    printf("%d\n", i); 
  }
 
  return 0;
}