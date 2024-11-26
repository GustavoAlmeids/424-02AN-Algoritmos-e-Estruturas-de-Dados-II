#include <stdio.h>      // Biblioteca para funções de entrada e saída
#include <string.h>     // Biblioteca para manipulação de strings
#include <locale.h>     // Biblioteca para configurar a localização

// Define uma estrutura chamada Carro que representa um carro
typedef struct {
    char modelo[50];    // String para armazenar o modelo do carro, com até 50 caracteres
    int ano;            // Inteiro para armazenar o ano de fabricação do carro
    double preco;       // Double para armazenar o preço do carro
} Carro;

// Função para modificar o preço de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;   // Atribui o novo preço ao carro apontado pelo ponteiro c
}

//Gustavo Aparecido de Almeida
// Função para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);       // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);             // Imprime o ano de fabricação do carro
    printf("Preço: R$ %.2lf\n", c->preco);   // Imprime o preço do carro com duas casas decimais
}

// Função principal do programa
int main() {
    setlocale(LC_ALL, "portuguese");   // Configura a localização para português

    Carro carro1;                      // Declara uma variável do tipo Carro chamada carro1

    // Inicializa os campos da estrutura carro1
    strcpy(carro1.modelo, "XyZ");      // Atribui o valor "XyZ" ao campo modelo do carro
    carro1.ano = 2020;                 // Atribui o valor 2020 ao campo ano do carro
    carro1.preco = 90000.00;           // Atribui o valor 90000.00 ao campo preco do carro

    printf("Dados antes da modificação:\n");   // Exibe uma mensagem informando que os dados serão impressos antes da modificação
    imprimirCarro(&carro1);                    // Chama a função imprimirCarro para exibir os dados do carro

    modificarPreco(&carro1, 115000.00);        // Modifica o preço do carro para 115000.00

    printf("\nDados após a modificação do preço:\n");   // Exibe uma mensagem informando que os dados serão impressos após a modificação
    imprimirCarro(&carro1);                             // Chama a função imprimirCarro para exibir os dados atualizados do carro

    return 0;    // Encerra o programa e retorna 0, indicando sucesso
}

