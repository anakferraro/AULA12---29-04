#include <stdio.h>

int main() {
  int num, soma = 0;

  printf("Digite o limite superior: ");
  scanf("%d", &num);

 if (num <= 0) {
    printf("O limite deve ser um número positivo.\n");
    return 1; 
  }
 for (int i = 1; i < num; i++) {
  if (i % 3 == 0 || i % 5 == 0) {
      soma += i; 
    }
  }
printf("A soma dos múltiplos de 3 ou 5 abaixo de %d é: %d\n", num, soma);

  return 0;
}