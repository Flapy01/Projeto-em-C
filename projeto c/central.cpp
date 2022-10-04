#include <iostream> 
#include "incluir.h"
using namespace std;
int main (void) {
    agenda = (Pessoa *)malloc(tamanho * sizeof(Pessoa));
    int decisao;
    while (decisao != 5){
        cout << "Digite o número da opção desejada. \n 1 - Incluir aluno\n 2 - Excluir aluno\n 3 - Pesquisar aluno\n 4 - Relátorio de notas\n 5 - Sair\nDigite: ";
        cin >> decisao;
        if (decisao == 1){
            incluir();
        }
        else if (decisao == 4){
            imprimir();
        }
    }
}
