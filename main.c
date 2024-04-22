#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int opcao, altura, base, total;
  float cir;
  do {
    printf("Escolha uma fórmula para calcular a área: \n1 - Retângulo \n2 - "
           "Triângulo \n3 - Círculo \n");
    scanf("%i", &opcao);
    if (opcao != 0) {
      switch (opcao) {
      case 1:
        printf("Digite a base: ");
        scanf("%i", &base);
        printf("Digite a altura: ");
        scanf("%i", &altura);
        total = base * altura;
        printf("A área do retângulo é: %i \n\n", total);
        break;
      case 2:
        printf("Digite a base: ");
        scanf("%i", &base);
        printf("Digite a altura: ");
        scanf("%i", &altura);
        total = (base * altura) / 2;
        printf("A área do triângulo é: %i \n\n", total);
        break;
      case 3:
        printf("Digite o raio: ");
        scanf("%i", &base);
        cir = 3.14 * (base * base);
        printf("A área do círculo é: %.2f \n\n", cir);
        break;
      }
    }
  } while (opcao != 0);
}