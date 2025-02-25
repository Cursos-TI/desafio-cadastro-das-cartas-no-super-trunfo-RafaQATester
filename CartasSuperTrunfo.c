#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

typedef struct {
    int codigo_da_cidade;
    char nome_da_cidade[50];
    unsigned long int populacao;
    float area, PIB, densidade_populacional, PIB_per_capita;
    int numero_de_pontos_turisticos;
} Carta;

int main(){
    Carta cidade1, cidade2;
    
    printf("*** Cadastro carta 1 ***\n");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código a cidade\n");
    scanf("%d", &cidade1.codigo_da_cidade);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1.nome_da_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &cidade1.populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &cidade1.area);

    cidade1.densidade_populacional = cidade1.populacao /cidade1.area;

    printf("Digite o PiB: \n");
    scanf("%f", &cidade1.PIB);

    cidade1.PIB_per_capita = cidade1.PIB / cidade1.populacao;

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &cidade1.numero_de_pontos_turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da cidade: %d \n", cidade1.codigo_da_cidade);
    printf("Nome da cidade: %s \n", cidade1.nome_da_cidade);
    printf("População: %3.lu \n", cidade1.populacao);
    printf("Área: %3.f \n", cidade1.area);
    printf("PIB: %3.f \n", cidade1.PIB);
    printf("Densidade populacional: %.2f\n", cidade1.densidade_populacional);
    printf("PIB per capita: %.5f\n", cidade1.PIB_per_capita);

    //Cadastro ciadade 2

    printf("*** Cadastro carta 2 ***\n");

    printf("Digite o código a cidade\n");
    scanf("%d", &cidade2.codigo_da_cidade);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2.nome_da_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &cidade2.populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &cidade2.area);

    cidade2.densidade_populacional = cidade2.populacao /cidade2.area;

    printf("Digite o PiB: \n");
    scanf("%f", &cidade2.PIB);

    cidade2.PIB_per_capita = cidade2.PIB / cidade2.populacao;

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &cidade2.numero_de_pontos_turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da cidade: %d \n", cidade2.codigo_da_cidade);
    printf("Nome da cidade: %s \n", cidade2.nome_da_cidade);
    printf("População: %3.lu \n", cidade2.populacao);
    printf("Área: %3.f \n", cidade2.area);
    printf("PIB: %3.f \n", cidade2.PIB);
    printf("Densidade populacional: %.2f\n", cidade2.densidade_populacional);
    printf("PIB per capita: %.5f\n", cidade2.PIB_per_capita);

    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;

    printf("*** Escolha o primeiro atributo para comparação das cartas ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha a opção: ");
    scanf("%d", &primeiroAtributo);

    printf("***** %s VS %s *****\n", cidade1.nome_da_cidade, cidade2.nome_da_cidade);

    switch (primeiroAtributo){
        case 1:
            printf("Atributo POPULAÇÃO usado para comparação\n");
            printf("Carta 1: %lu - Carta 2: %lu\n", cidade1.populacao, cidade2.populacao);
            resultado1 = cidade1.populacao;
        break;

        case 2:
            printf("Atributo ÁREA usado para comparação\n");
            printf("Carta 1: %f - Carta 2: %f\n", cidade1.area, cidade2.area);
            resultado1 = cidade1.area;
        break;

        case 3:
            printf("Atributo PIB usado para comparação\n");
            printf("Carta 1: %f - Carta 2: %f\n", cidade1.PIB, cidade2.PIB);
            resultado1 = cidade1.PIB;
        break;

        case 4:
            printf("Atributo PONTOS TURÍSTICOS usado para comparação\n");
            printf("Carta 1: %d - Carta 2: %d\n", cidade1.numero_de_pontos_turisticos, cidade2.numero_de_pontos_turisticos);
            resultado1 = cidade1.numero_de_pontos_turisticos;
        break;

        case 5:
            printf("Atributo DENSIDADE POPULACIONAL usado para comparação\n");
            printf("Carta 1: %f - Carta 2: %f\n", cidade1.densidade_populacional, cidade2.densidade_populacional);
            resultado1 = cidade1.densidade_populacional;
        break;

        default:
            printf("Opção inválida\n");
    }     
       
    printf("*** Escolha o primeiro atributo para comparação das cartas ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha a opção: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo){
        printf("Escolha um atributo diferente!\n");
    } else {
        switch (segundoAtributo){
            case 1:
                printf("Atributo POPULAÇÃO usado para comparação\n");
                printf("Carta 1: %lu - Carta 2: %lu\n", cidade1.populacao, cidade2.populacao);
                resultado2 = cidade2.populacao;
            break;
    
            case 2:
                printf("Atributo ÁREA usado para comparação\n");
                printf("Carta 1: %f - Carta 2: %f\n", cidade1.area, cidade2.area);
                resultado2 = cidade2.area;
            break;
    
            case 3:
                printf("Atributo PIB usado para comparação\n");
                printf("Carta 1: %f - Carta 2: %f\n", cidade1.PIB, cidade2.PIB);
                resultado2 = cidade2.PIB;
            break;
    
            case 4:
                printf("Atributo PONTOS TURÍSTICOS usado para comparação\n");
                printf("Carta 1: %d - Carta 2: %d\n", cidade1.numero_de_pontos_turisticos, cidade2.numero_de_pontos_turisticos);
                resultado2 = cidade2.numero_de_pontos_turisticos;
            break;
    
            case 5:
                printf("Atributo DENSIDADE POPULACIONAL usado para comparação\n");
                printf("Carta 1: %f - Carta 2: %f\n", cidade1.densidade_populacional, cidade2.densidade_populacional);
                resultado2 = cidade2.densidade_populacional;
            break;
    
            default:
                printf("Opção inválida\n");
    }

    if (resultado1 > resultado2){
        printf("Carta 1 venceu!");
    } else if (resultado1 == resultado2){
        printf("Empate!\n");
    } else{
        printf("Carta 2 venceu!\n");
    }
}
    return 0;
}
