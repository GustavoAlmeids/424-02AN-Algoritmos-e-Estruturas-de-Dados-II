#include <stdio.h>    // Biblioteca para funções de entrada e saída

// Declara a função calcularResultado, que recebe um vetor e o seu tamanho
int calcularResultado(int v[], int n);


//Gustavo Aparecido de Almeida
// Função principal do programa
int main() {
    int vetor[5], i, resultado;   // Declara um vetor de 5 inteiros, um índice i e a variável resultado

    // Preenche o vetor com valores
    for (i = 0; i < 5; i++) {     // Loop que vai de 0 a 4 para inicializar o vetor
        vetor[i] = i * 2;         // Atribui ao vetor na posição i o valor de i multiplicado por 2
    }

    // Chama a função calcularResultado para somar os valores do vetor
    resultado = calcularResultado(vetor, 5);

    // Imprime o resultado retornado pela função calcularResultado
    printf("O resultado e: %d\n", resultado);

    return 0;    // Encerra o programa e retorna 0, indicando sucesso
}

// Função que calcula a soma dos elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;       // Declara uma variável i para o índice e inicializa soma com 0

    // Soma todos os elementos do vetor
    for (i = 0; i < n; i++) {   // Loop que percorre de 0 até n-1
        soma += v[i];           // Adiciona o valor do elemento v[i] à variável soma
    }
    return soma;    // Retorna o valor da soma
}

