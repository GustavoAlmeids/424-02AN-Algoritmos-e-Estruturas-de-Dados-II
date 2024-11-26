#include <stdio.h>      // Biblioteca para fun��es de entrada e sa�da
#include <string.h>     // Biblioteca para manipula��o de strings
#include <locale.h>     // Biblioteca para configurar a localiza��o

// Define uma estrutura chamada Carro que representa um carro
typedef struct {
    char modelo[50];    // String para armazenar o modelo do carro, com at� 50 caracteres
    int ano;            // Inteiro para armazenar o ano de fabrica��o do carro
    double preco;       // Double para armazenar o pre�o do carro
} Carro;

// Fun��o para modificar o pre�o de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;   // Atribui o novo pre�o ao carro apontado pelo ponteiro c
}

//Gustavo Aparecido de Almeida
// Fun��o para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);       // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);             // Imprime o ano de fabrica��o do carro
    printf("Pre�o: R$ %.2lf\n", c->preco);   // Imprime o pre�o do carro com duas casas decimais
}

// Fun��o principal do programa
int main() {
    setlocale(LC_ALL, "portuguese");   // Configura a localiza��o para portugu�s

    Carro carro1;                      // Declara uma vari�vel do tipo Carro chamada carro1

    // Inicializa os campos da estrutura carro1
    strcpy(carro1.modelo, "XyZ");      // Atribui o valor "XyZ" ao campo modelo do carro
    carro1.ano = 2020;                 // Atribui o valor 2020 ao campo ano do carro
    carro1.preco = 90000.00;           // Atribui o valor 90000.00 ao campo preco do carro

    printf("Dados antes da modifica��o:\n");   // Exibe uma mensagem informando que os dados ser�o impressos antes da modifica��o
    imprimirCarro(&carro1);                    // Chama a fun��o imprimirCarro para exibir os dados do carro

    modificarPreco(&carro1, 115000.00);        // Modifica o pre�o do carro para 115000.00

    printf("\nDados ap�s a modifica��o do pre�o:\n");   // Exibe uma mensagem informando que os dados ser�o impressos ap�s a modifica��o
    imprimirCarro(&carro1);                             // Chama a fun��o imprimirCarro para exibir os dados atualizados do carro

    return 0;    // Encerra o programa e retorna 0, indicando sucesso
}

