#include <stdio.h>

//Gustavo Aparecido de Almeida

int encontrarMaior(int valores[], int n) {
    int maior = valores[0], posicao = 0;
    for (int i = 1; i < n; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posicao = i;
        }
    }
    return posicao;
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

    int posicao = encontrarMaior(valores, n);
    printf("Maior valor: %d, Posicaoo: %d\n", valores[posicao], posicao);

    return 0;
}

