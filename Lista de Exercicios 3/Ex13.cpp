#include <stdio.h>

//Gustavo Aparecido de Almeida

float calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    int num1, num2, num3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    float media = calcularMedia(num1, num2, num3);
    printf("A media e: %.2f\n", media);

    return 0;
}

