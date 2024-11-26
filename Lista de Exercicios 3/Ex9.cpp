#include <stdio.h>

//Gustavo Aparecido de Almeida

int multiplicarValores(int valores[], int n) {
    int produto = 1;
    for (int i = 0; i < n; i++) {
        produto *= valores[i];
    }
    return produto;
}

int main() {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int valores[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int produto = multiplicarValores(valores, n);
    printf("Produto dos valores: %d\n", produto);

    return 0;
}

