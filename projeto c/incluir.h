#include "iostream"
using namespace std;

typedef struct Aluno {
    string Nome;
    float Nota_1;
    float Nota_2;
    }Pessoa;
Pessoa a1, *ptrAluno = &a1;
float *ptr_float, nota1, nota2;
string *ptr_string, nome;

string incluirNome(string nome){
    nome = (*ptrAluno).Nome;
    return(nome);
}
float incluirNota1(float nota1){   
    nota1 = (*ptrAluno).Nota_1;
    return(nota1);
}

float incluirNota2(float nota2){
    nota2 = (*ptrAluno).Nota_2; 
    return(nota2);
}
