#include <iostream>
#include "incluir.h"

using namespace std;

int main() {
    ptr_string = new string[10];
    ptr_float = new float[10];


    for (int i = 0; i < 4; i++){
        cout << "Digite o nome do aluno: " << incluirNome(nome);
        cin >> nome;
        cout << "Digite a primeira nota do aluno: " << incluirNota1(nota1);
        cin >> nota1; 
        cout << "Digite a segunda nota do aluno: " << incluirNota1(nota2);
        cin >> nota2;

        ptr_string[i] = nome;
        ptr_float[i*2] = nota1;
        ptr_float[i*2+1] = nota2;
        
        cout << ptr_string[i] << endl << ptr_float[i*2] << endl << ptr_float[i*2+1] << endl;
         
    }
    for (int i = 0; i < 8; i++){
        cout << "ptr_string" << "[" << i << "] - " << ptr_string[i] << endl;
        cout << "ptr_nota1" << "[" << i << "] - " << ptr_float[i] << endl;
    }
}