#include <stdio.h>

//Gustavo Aparecido de Almeida

float calcularMedia(float n1, float n2, float n3, float n4) {
    return (n1 + n2 + n3 + n4) / 4;
}

int main() {
    float n1, n2, n3, n4, media;
    printf("Digite as 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = calcularMedia(n1, n2, n3, n4);
    printf("Media: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}

