#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    int carta_1;
    char cidade1[50];
    char codigo;
    int populacao;
    float area;
    float pib;
    int turistico;

    // Início do programa
    printf("carta_1\n");

    // Entrada do código
    printf("Digite o código: \n");
    scanf(" %c", &codigo); // Espaço antes de %c para evitar problemas com o buffer

    // Entrada da cidade
    printf("Digite a cidade: \n");
    scanf("%49s", &cidade1); // Limitar a entrada a 49 caracteres para evitar estouro de buffer

    // Entrada da população
    printf("Digite a população: \n");
    scanf("%d", &populacao);

    // Entrada da área em km²
    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    // Entrada do PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Entrada do número de pontos turísticos
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico); // Utilizar %d para valores inteiros

    // Exibição das informações coletadas
    printf("\nInformações da cidade:\n");
    printf("Código da carta: %c\n", codigo);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.3f\n", area); // Exibir área com tres casas decimais
    printf("PIB: %.3f\n", pib); // Exibir PIB com tres casas decimais
    printf("Número de pontos turísticos: %d\n", turistico);

    return 0;

}

#include <stdio.h>

int main(){
    int carta_2;
    char cidade2[50];
    char codigo;
    int populacao;
    float area;
    float pib;
    int turistico;

    // Início do programa
    printf("carta_2\n");

    // Entrada do código
    printf("Digite o código: \n");
    scanf(" %c", &codigo); // Espaço antes de %c para evitar problemas com o buffer

    // Entrada da cidade
    printf("Digite a cidade: \n");
    scanf("%49s", &cidade2); // Limitar a entrada a 49 caracteres para evitar estouro de buffer

    // Entrada da população
    printf("Digite a população: \n");
    scanf("%d", &populacao);

    // Entrada da área em km²
    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    // Entrada do PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Entrada do número de pontos turísticos
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico); // Utilizar %d para valores inteiros

    // Exibição das informações coletadas
    printf("\nInformações da cidade:\n");
    printf("Código da carta: %c\n", codigo);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.3f\n", area); // Exibir área com tres casas decimais
    printf("PIB: %.3f\n", pib); // Exibir PIB com tres casas decimais
    printf("Número de pontos turísticos: %d\n", turistico);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

}
