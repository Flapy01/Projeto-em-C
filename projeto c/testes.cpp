/*
  Contato (nome e numero)
  inserir
  imprimir
  */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[50];
  char numero[10];
} Contato;

Contato *agenda;
int quant = 0;
int tamanho = 10;

void menu(int *esc);
void inserir();
void imprimir();

int main(void) {
  agenda = (Contato *)malloc(tamanho * sizeof(Contato));
  int escolha;
  while(1){
    menu(&escolha);
    if (escolha == 1){
      inserir();
    } else if (escolha == 2){
      imprimir();
    } else if (escolha == 3){
      printf("Tchau!!!");
      break;
    }
  }
  free(agenda);
  return 0;
}

void menu(int *esc){
  printf(
  "Escolha uma opção:\n"
  "1 - Inserir\n"
  "2 - Imprimir\n"
  "3 - Sair\n"
  );
  scanf("%d", esc);
}

void inserir(){
  Contato c;
  printf("Digite o nome: ");
  scanf("%s", c.nome);
  printf("Digite o numero: ");
  scanf("%s", c.numero);
  agenda[quant] = c;
  quant++;
  printf("Contato inserido com sucesso!\n");
  //system("clear");
  //printf("%s - %s", c.nome, c.numero, "\n");
}

void imprimir(){
  for(int i = 0; i < quant; i++){
    printf("Contato %d\n", i+1);
    printf("Nome: %s\n", agenda[i].nome);
    printf("Numero %s\n", agenda[i].numero);
  }
  printf("\n\n");
}