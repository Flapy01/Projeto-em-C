#include <iostream> 
#include "funções.h"
using namespace std;
int main (void) {
    agenda = (Pessoa *)malloc(1 * sizeof(Pessoa));
    int decisao;
    while (decisao != 5){
        if(add >= 2){
            agenda = (Pessoa *)realloc(agenda, add*sizeof(Pessoa));
        }
        cout << "Digite o número da opção desejada. \n 1 - Incluir aluno\n 2 - Excluir aluno\n 3 - Pesquisar aluno\n 4 - Relátorio de notas\n 5 - Sair\nDigite: ";
        cin >> decisao;
        if (decisao == 1){
            incluir();
        }
        else if (decisao == 2){
            excluir();
        }
        else if (decisao == 3){
            pesquisar();
        }      
        else if (decisao == 4){
            imprimir();
        } 
    }
    free(agenda);
}


