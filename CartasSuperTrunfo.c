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

  // Exibição da Carta 1
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f bilhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);

  // Exibição da Carta 2
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
}