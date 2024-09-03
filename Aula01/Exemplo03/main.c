#include <stdio.h>

int main() {
  // Declarando as variáveis
  float num1, num2, num3, media;

  // Entrada de dados
  printf("Digite o primeiro número: \n");
  scanf("%f", &num1);

  printf("Digite o segundo número: \n");
  scanf("%f", &num2);

  printf("Digite o terceiro número: \n");
  scanf("%f", &num3);

  // Calculo da média
  media = (num1 + num2 + num3) / 3;

  // Saída de dados
  printf("A média dos números é: %.2f\n", media);
  return 0;
}