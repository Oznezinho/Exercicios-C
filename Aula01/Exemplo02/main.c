#include <stdio.h>

int main(void) {
  // Declarar as variaveis
  int num1, num2, soma;

  // Entrada de dados
  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);

  printf("Digite o segundo número: \n");
  scanf("%d", &num2);

  // Calculando Soma
  soma = num1 + num2;

  // Saida de dados
  printf("A soma de %d e %d é %d\n", num1, num2, soma);

  return 0;
}
