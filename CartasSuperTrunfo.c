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
  estado1 = 'P'; // PR;
  strcpy(codigo1, "A01");
  strcpy(cidade1, "Cascavel");
  populacao1 = 348051;
  area1 = 2101.0;
  pib1 = 15.8;
  pontosTuristicos1 = 82;

  // Atribuições para Carta 2
  estado2 = 'M'; // MS;
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

  //Comparação de cartas (atributo: população)
  printf("\nComparação de cartas (Atributo: População):\n");
  printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
  printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);
  if (vitoriaPopulacao) {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
  
  // Cálculos switch
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação de cartas:\n");
    printf("Carta 1 - %s (%c)\n", cidade1, estado1);
    printf("Carta 2 - %s (%c)\n\n", cidade2, estado2);

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", cidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 5.\n");
            break;
    }
  
  
    }
  return 0;
}