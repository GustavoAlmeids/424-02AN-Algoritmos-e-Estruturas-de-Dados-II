#include <stdio.h>

//Gustavo Aparecido de Almeida

void exibirImpares(int numero) {
    for (int i = 1; i <= numero; i += 2) {
        if (i % 7 != 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    exibirImpares(numero);

    return 0;
}

