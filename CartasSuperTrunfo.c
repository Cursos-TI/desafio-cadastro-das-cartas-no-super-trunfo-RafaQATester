#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_da_cidade, numero_de_pontos_turisticos;
    char nome[50];
    float populacao, area, PIB;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código a cidade\n");
    scanf("%d", &codigo_da_cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PiB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da cidade: %d \n", codigo_da_cidade);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %3.f \n", populacao);
    printf("Área: %3.f \n", area);
    printf("PIB: %3.f \n", PIB);

    return 0;
}
