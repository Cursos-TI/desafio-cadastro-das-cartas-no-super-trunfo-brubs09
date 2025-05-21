#include <stdio.h>
#include <string.h>

// Enumeração para os atributos
enum Atributos {
  POPULACAO = 1,
  AREA,
  PIB,
  PONTOS_TURISTICOS,
  DENSIDADE
};

int main() {
  // Dados da Carta 1
  char cidade1[50] = "Cascavel", estado1[] = "PR";
  int populacao1 = 348051, pontos1 = 82;
  float area1 = 2101.0, pib1 = 15.8;

  // Dados da Carta 2
  char cidade2[50] = "Campo Grande", estado2[] = "MS";
  int populacao2 = 898100, pontos2 = 231;
  float area2 = 8096.0, pib2 = 30.1;

  // Cálculo da densidade
  float dens1 = populacao1 / area1;
  float dens2 = populacao2 / area2;

  int escolha1, escolha2;
  int valido = 0;

  // MENU INTERATIVO - ESCOLHA DOS DOIS ATRIBUTOS
  do {
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

    if (escolha1 < 1 || escolha1 > 5) {
      printf("Opção inválida! Tente novamente.\n");
      continue;
    }

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
      if (i != escolha1) {
        switch(i) {
          case POPULACAO: printf("%d - População\n", i); break;
          case AREA: printf("%d - Área\n", i); break;
          case PIB: printf("%d - PIB\n", i); break;
          case PONTOS_TURISTICOS: printf("%d - Pontos Turísticos\n", i); break;
          case DENSIDADE: printf("%d - Densidade Demográfica\n", i); break;
        }
      }
    }

    printf("Escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
      printf("Opção inválida! Tente novamente.\n");
    } else {
      valido = 1;
    }
  } while (!valido);

  // Função auxiliar para pegar valores dos atributos
  float valor1_a1 = 0, valor1_a2 = 0;
  float valor2_a1 = 0, valor2_a2 = 0;

  // Função para atribuir valores de acordo com a escolha
  float get_valor(int escolha, int pop, float area, float pib, int pontos, float dens) {
    switch (escolha) {
      case POPULACAO: return pop;
      case AREA: return area;
      case PIB: return pib;
      case PONTOS_TURISTICOS: return pontos;
      case DENSIDADE: return dens;
    }
    return 0;
  }

  // Obter valores dos atributos
  valor1_a1 = get_valor(escolha1, populacao1, area1, pib1, pontos1, dens1);
  valor2_a1 = get_valor(escolha1, populacao2, area2, pib2, pontos2, dens2);
  valor1_a2 = get_valor(escolha2, populacao1, area1, pib1, pontos1, dens1);
  valor2_a2 = get_valor(escolha2, populacao2, area2, pib2, pontos2, dens2);

  // Comparações
  int resultado1, resultado2;

  // Regra especial para densidade
  resultado1 = (escolha1 == DENSIDADE) ? (valor1_a1 < valor2_a1) : (valor1_a1 > valor2_a1);
  resultado2 = (escolha2 == DENSIDADE) ? (valor1_a2 < valor2_a2) : (valor1_a2 > valor2_a2);

  float soma1 = valor1_a1 + valor1_a2;
  float soma2 = valor2_a1 + valor2_a2;

  // Resultado Final
  printf("\n--- RESULTADO DA COMPARAÇÃO ---\n\n");

  // Atributo 1
  printf("Atributo 1: ");
  switch (escolha1) {
    case POPULACAO: printf("População\n"); break;
    case AREA: printf("Área\n"); break;
    case PIB: printf("PIB\n"); break;
    case PONTOS_TURISTICOS: printf("Pontos Turísticos\n"); break;
    case DENSIDADE: printf("Densidade Demográfica\n"); break;
  }
  printf("%s (%s): %.2f\n", cidade1, estado1, valor1_a1);
  printf("%s (%s): %.2f\n", cidade2, estado2, valor2_a1);
  printf("Resultado: %s venceu!\n\n", resultado1 ? cidade1 : cidade2);

  // Atributo 2
  printf("Atributo 2: ");
  switch (escolha2) {
    case POPULACAO: printf("População\n"); break;
    case AREA: printf("Área\n"); break;
    case PIB: printf("PIB\n"); break;
    case PONTOS_TURISTICOS: printf("Pontos Turísticos\n"); break;
    case DENSIDADE: printf("Densidade Demográfica\n"); break;
  }
  printf("%s (%s): %.2f\n", cidade1, estado1, valor1_a2);
  printf("%s (%s): %.2f\n", cidade2, estado2, valor2_a2);
  printf("Resultado: %s venceu!\n\n", resultado2 ? cidade1 : cidade2);

  // Soma final
  printf("SOMA DOS ATRIBUTOS:\n");
  printf("%s: %.2f\n", cidade1, soma1);
  printf("%s: %.2f\n", cidade2, soma2);

  if (soma1 > soma2) {
    printf("Resultado Final: %s venceu a rodada!\n", cidade1);
  } else if (soma2 > soma1) {
    printf("Resultado Final: %s venceu a rodada!\n", cidade2);
  } else {
    printf("Resultado Final: Empate!\n");
  }

  return 0;
}