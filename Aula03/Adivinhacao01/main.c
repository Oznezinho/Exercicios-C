#include <stdio.h>

// Versão 01 do jogo
// Criar msg inicial
// Definir as variaveis
// Criar um loop para o jogo

int main() {
  printf("_____ BEM VINDO AO JOGO DA ADIVINHAÇÃO _____\n");
  printf("\n");
  printf("DESCUBRA O NÚMERO QUE ESTOU IMAGINANDO\n");
  printf("_______________________________________________\n");
  printf("O NÚMERO ESTÁ ENTRE 0 E 10\n");
  printf("VOCÊ TEM 3 TENTATIVAS, BOA SORTE!!!\n");
  printf("_______________________________________________\n");

  //----------------------------------------------------//

  int numeroSecreto = 7;
   int chute;
   //---------Iniciando o For
   for(int i = 1; i <= 3; i++) {
       printf("Qual é o seu chute");
    scanf("%d", &chute);
    // Verificando o chute digitado
    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);
    int menor = (chute < numeroSecreto);

      if (acertou) {
          printf("NA MOSCA!!  \n");
          break;
      } else if (maior) {
           printf("TENTA UM NÚMERO MENOR  \n");
       } else if (menor) {
          printf("TENTA UM NÚMERO MAIOR  \n");
      }
   }
   printf("TENTE DE NOVO\n");
       return 0;
}