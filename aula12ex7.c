#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    int tentativas = 0;

    printf("Digite a senha: ");
    scanf("%s", senha); 

    while (strcmp(senha, "azimo") != 0) {
        tentativas++;
        printf("Senha errada. Tentativas restantes: %d\n", 3 - tentativas);
        if (tentativas == 3) {
            printf("Tente novamente mais tarde.\n");
            break;
        }
        printf("Digite a senha: ");
        scanf("%s", senha);
    }

    if (strcmp(senha, "azimo") == 0) {
        printf("Seja bem vindo!\n");
    }

    return 0;
}
    

    
