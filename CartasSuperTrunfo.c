#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  int main(void)
{
    char RioDeJaneiro[100] = "Rio de Janeiro";
    int populacao = 17220000;
    float area = 43.696f;
    float pib = 1.3f;
    float idh = 0.6613f;
    int numero_de_pontos_turisticos = 55;
    float densidade_populacional = populacao / area;
    float pib_per_capita = 1020000000000.0f / 17220000.0f;

    printf("Cidade: %s\n", RioDeJaneiro);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.1f trilhões de reais\n", pib);
    printf("IDH: %.4f\n", idh);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

    return 0;
}
