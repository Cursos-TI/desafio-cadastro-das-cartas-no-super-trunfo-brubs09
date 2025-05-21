#include <stdio.h>
#include <string.h>

int main() {
  // Variáveis para Carta 1
  char estado1, codigo1[4], cidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  // Variáveis para Carta 2
  char estado2, codigo2[4], cidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2;

  // Atribuições para Carta 1
  estado1 = 'A';
  strcpy(codigo1, "A01");
  strcpy(cidade1, "Cascavel");
  populacao1 = 348051;
  area1 = 2101.0;
  pib1 = 15.8;
  pontosTuristicos1 = 82;

  // Atribuições para Carta 2
  estado2 = 'B';
  strcpy(codigo2, "B01");
  strcpy(cidade2, "Campo Grande");
  populacao2 = 898100;
  area2 = 8096.0;
  pib2 = 30.1;
  pontosTuristicos2 = 231;


    // Cálculos
  float densidade1 = populacao1 / area1;
  float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
  float inversoDensidade1 = 1 / densidade1;
  float superPoder1 = populacao1 + area1 + (pib1 * 1000000000.0f) + pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

  float densidade2 = populacao2 / area2;
  float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
  float inversoDensidade2 = 1 / densidade2;
  float superPoder2 = populacao2 + area2 + (pib2 * 1000000000.0f) + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

  // Comparações (1 se Carta 1 vence, 0 se Carta 2 vence)
 
  int vitoriaPopulacao = populacao1 > populacao2;
  int vitoriaArea = area1 > area2;
  int vitoriaPIB = pib1 > pib2;
  int vitoriaPontos = pontosTuristicos1 > pontosTuristicos2;
  int vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
  int vitoriaDensidade = densidade1 < densidade2; // menor vence
  int vitoriaSuperPoder = superPoder1 > superPoder2;

  // Exibição das cartas
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f bilhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);


   // Exibição das comparações
  printf("\n--- RESULTADO DAS COMPARAÇÕES ---\n\n");
  printf("População: Carta %d venceu (%d)\n", vitoriaPopulacao ? 1 : 2, vitoriaPopulacao);
  printf("Área: Carta %d venceu (%d)\n", vitoriaArea ? 1 : 2, vitoriaArea);
  printf("PIB: Carta %d venceu (%d)\n", vitoriaPIB ? 1 : 2, vitoriaPIB);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitoriaPontos ? 1 : 2, vitoriaPontos);
  printf("PIB per Capita: Carta %d venceu (%d)\n", vitoriaPibPerCapita ? 1 : 2, vitoriaPibPerCapita);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", vitoriaDensidade ? 1 : 2, vitoriaDensidade);
  printf("Super Poder: Carta %d venceu (%d)\n", vitoriaSuperPoder ? 1 : 2, vitoriaSuperPoder);

  return 0;
}