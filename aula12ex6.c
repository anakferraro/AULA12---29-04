#include <stdio.h>
#include <string.h> 
int main() {
  char nome[20];
  char sobrenome[20];
  char completo[40];


printf("Digite o nome: ");
scanf("%19s", nome);
printf("Digite o sobrenome: ");
scanf("%19s", sobrenome);

completo[0] = '\0'; 

strcat(completo, " ");

strcat (completo, nome);
 
strcat(completo, " ");
  
strcat(completo, sobrenome);

  printf("Nome completo: %s\n", completo);

  return 0;
}
 

