//Exercício 4
#include <stdio.h>

int main(void) {
  int i, n;
  printf("\nDigite um número natural:\t");
  scanf("%d", &n);

  for(i = 1; i <= 6; i++){
    printf("%d\n", 3*i); 
  }
 
  return 0;
}