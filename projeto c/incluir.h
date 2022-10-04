#include "iostream"
using namespace std;
 
typedef struct Aluno{
    char Nome[10];
    char Nota_1[10];
    char Nota_2[10];
    }Pessoa;


int quant = 0;
int tamanho = 10;
Pessoa *agenda, c;
void incluir(), imprimir();


void incluir(){
    cout << "Digite o nome do aluno: ";
    cin >> c.Nome; 
    cout << "\nDigite a primeira nota do aluno: ";
    cin >> c.Nota_1;
    cout << "\nDigite a segunda nota do aluno: ";
    cin >> c.Nota_2;
    agenda[quant] = c;
    quant++;
}
void imprimir(){
  for(int i = 0; i < quant; i++){
    cout << "Contato " << i+1 << endl;
    cout << "Nome: " << agenda[i].Nome << endl;
    cout << "Nota 1: " << agenda[i].Nota_1 << endl;
    cout << "Nota 2: " << agenda[i].Nota_2 << endl;
  }
}

