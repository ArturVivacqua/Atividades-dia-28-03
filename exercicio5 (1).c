//Exercício 5
#include <stdio.h>

int main(void) {
  int i, soma = 0;
  

  for(i = 0; i <= 50; i++){
    printf("%d\n", 2*i); 
    soma = soma + 2*i;
    
  }
 printf("A soma dos 50 primeiros numeros pares é %d\n", soma); 
  return 0;
}