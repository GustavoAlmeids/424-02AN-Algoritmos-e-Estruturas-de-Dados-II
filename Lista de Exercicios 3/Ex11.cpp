#include <stdio.h>

//Gustavo Aparecido de Almeida

int menorNumero(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    return menor;
}

int main() {
    int num1, num2, num3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int menor = menorNumero(num1, num2, num3);
    printf("O menor numero e: %d\n", menor);

    return 0;
}

