#include "iostream"
#include <string.h>
using namespace std;
 
typedef struct Aluno{
    char Nome[10];
    char Nota_1[10];
    char Nota_2[10];
    }Pessoa;

char nome_Pesquisa[10], nome_Excluir[10];
int quant = 0, res = 0, exc = 0, add = 1;
Pessoa *agenda, c;
void incluir(), imprimir(), pesquisar(), excluir();
float nota1, nota2, media;


void incluir(){
    add++;
    cout << "Digite o nome do aluno: ";
    cin >> c.Nome; 
    cout << "\nDigite a primeira nota do aluno: ";
    cin >> c.Nota_1;
    cout << "\nDigite a segunda nota do aluno: ";
    cin >> c.Nota_2;
    agenda[quant] = c;
    quant++;
}

void pesquisar(){
  cout << "Digite o nome do aluno para consulta-lo: ";
  cin >> nome_Pesquisa;
  for(int i = 0; i < quant; i++){
    if(!strcmp(agenda[i].Nome, nome_Pesquisa)){
      res++;
      cout << "****ALUNO ENCONTRADO****" << endl;
      cout << "Nome: " << agenda[i].Nome << endl;
      cout << "Nota 1: " << agenda[i].Nota_1 << endl;
      cout << "Nota 2: " << agenda[i].Nota_2 << endl;
      break;  
    }
  }
}

void excluir(){
  cout << "Digite o nome do aluno para exclui-lo: ";
  cin >> nome_Excluir;
  for(int i = 0; i < quant; i++){
    if(!strcmp(agenda[i].Nome, nome_Excluir)){
      exc++;
      cout << "****ALUNO ENCONTRADO****" << endl;
      memset (agenda[i].Nome,'\0',10);
      memset (agenda[i].Nota_1,'\0',10);
      memset (agenda[i].Nota_2,'\0',10);
      cout << "****ALUNO EXCLUIDO****" << endl;
      }
    else{
      cout << "****ALUNO NÃO ENCONTRADO****" << endl;
    }
  }   
}

 
     

void imprimir(){
  for(int i = 0; i < quant; i++){
    cout << "Aluno [" << i+1 << "]" << endl;
    cout << "Nome: " << agenda[i].Nome << endl;
    cout << "Nota 1: " << agenda[i].Nota_1 << endl;
    cout << "Nota 2: " << agenda[i].Nota_2 << endl;
    nota1 = atof(agenda[i].Nota_1);
    nota2 = atof(agenda[i].Nota_2);
    media = (nota1 + nota2) / 2;
    if (media <= 4){
      cout << "A média é: " << media << endl << "\n****ALUNO REPROVADO****\n" << endl;
    }
    else if(media >= 4 and media < 6){
      cout << "A média é: " << media << endl << "\n****ALUNO EM RECUPERAÇÃO****\n" << endl;
    }
    else if(media >= 6){
      cout << "A média é: " << media << endl << "\n****ALUNO APROVADO****\n" << endl;
    }
  }
}

