#include <stdio.h>

//Gustavo Aparecido de Almeida

typedef struct {
	double peso;
	int idade;
	double altura;
} pessoa;

// Função para imprimir os detalhes de uma pessoa, com o índice fornecido
void imprimePessoa(pessoa p, int indice) {
	printf("Pessoa %d: peso: %lf, Idade: %d, Altura: %lf. \n\n", indice, p.peso, p.idade, p.altura);
}

void valoresPessoa(pessoa *p) {
    printf("Digite os valores: peso, idade e altura: ");
    scanf("%lf %d %lf", &p->peso, &p->idade, &p->altura);  
}

int main() {
	pessoa pessoas[5];

    // Solicitando valores para 5 pessoas
    for(int i = 0; i < 5; i++){
    	valoresPessoa(&pessoas[i]);
	}
	
    // Usando um loop for para imprimir cada pessoa
	for(int i = 0; i < 5; i++){
    	imprimePessoa(pessoas[i], i + 1);  // Passando o índice da pessoa (i + 1)
	}
	
	return 0;
}

