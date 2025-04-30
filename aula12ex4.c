#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6];
    char letra;
    char *posicao;
    int tentativas = 3;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%5s", palavra); 

    while (tentativas > 0) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra); 

        posicao = strchr(palavra, letra);

        if (posicao != NULL) {
            printf("Letra encontrada!\n");
            return 0; 
        } else {
            printf("Letra não encontrada.\n");
            tentativas--;
            if (tentativas > 0) {
                printf("Tentativas restantes: %d\n", tentativas);
            }
        }
    }

    printf("Você esgotou suas tentativas.\n");

    return 0;
}




