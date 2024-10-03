#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Estrutura para armazenar os dados do cliente
struct Cliente {
  char nome[50];
  char endereco[150];
  int idade;
  //char cidade[50];
  //char estdao[50];
  //char telefone[50];
};

int main(void) {
  // Instanciando o Cliente
  struct Cliente cliente;
  FILE *arquivo;

  // Solicitando os dados
  printf("Digite seu nome: ");
  fgets(cliente.nome, 50, stdin);

  cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

  printf("Digite sua idade: ");
  scanf("%d", &cliente.idade);

  // Limpando o buffer
  getchar();

  // Solicitando o endereço do cliente
  printf("Digite seu endereço: ");
  fgets(cliente.endereco, 150, stdin);

  cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';

  // ---- Resto dos dados ---- //
  // cidade
  //printf("Digite sua cidade: ");
  //fgets(cliente.cidade, 50, stdin);

  // estado
  //printf("Digite seu estado: ");
  //fgets(cliente.estdao, 50, stdin);

  // telefone
  //printf("Digite seu telefone: ");
  //fgets(cliente.telefone, 50, stdin);
  
  arquivo = fopen("cliente.txt", "a");
   if(arquivo == NULL){
     printf("*Erro ao abrir o arquivo*\n");
     return 1;
   }
  //Gravando os dados no arquivo
  fprintf(arquivo, "Nome: %s\n Idede: %d\n Endereço: %s\n", cliente.nome, cliente.idade, cliente.endereco);
  fclose(arquivo);
  printf("Dados gravados com sucesso!\n");
  
  // Exibindo as informações
  printf("\n");
  printf("Dados do cliente\n");

  printf("Nome: %s", cliente.nome);
  printf("Idade: %d\n", cliente.idade);
  printf("Endereço: %s", cliente.endereco);
  //printf("Cidade: %s", cliente.cidade);
  //printf("Estado: %s", cliente.estdao);
  //printf("Telefone: %s", cliente.telefone);

  return 0;
}