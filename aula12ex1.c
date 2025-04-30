#include <stdio.h>


int main() {
  char nome[4] = "Ana";


  printf("Nome: %s\n", nome);

    printf("* ");
  
  for (int i = 0; i < 4; i++) {
    printf("%c * ", nome[i]);
  }
  printf("\n");

  return 0;
}
