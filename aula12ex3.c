#include <stdio.h>

int main() {
    char senha[6]; 
    int tentativas = 3;
    int i;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%5s", senha); 

     
        if (senha[0] == 'a' && senha[1] == 'z' && senha[2] == 'i' && senha[3] == 'm' && senha[4] == 'o' && senha[5] == '\0') {
            printf("Seja bem vindo!\n");
            return 0;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            }
        }
    }

    printf("Tente novamente mais tarde\n");
    return 0;
}
