#include <stdio.h>

//Gustavo Aparecido de Almeida

int somarValores(int valores[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    return soma;
}

int main() {
    int n, soma;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int valores[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    soma = somarValores(valores, n);
    float media = (float)soma / n;

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}

