//exemplo 06 programa para demonstrar o uso de uni�es

#include <iostream>

using namespace std;

//defini��o da uni�o
union Cadastro {
    const char *nome;
    float nota1;
    float nota2;
};

//fun��o principal
int main() {

    cout << endl;
    cout << "* Exemplo de Unioes\n\n";

    //Declara uma vari�vel do tipo Cadastro
    union Cadastro aluno;

    //---------------------------------------------

    //Exibe o endere�o de mem�ria utilizado por cada atributo
    cout << "Endere�o de memoria utilizado por <nome>: " << &aluno.nome << endl;
    cout << "Endere�o de memoria utilizado por <nota1>: " << &aluno.nota1 << endl;
    cout << "Endere�o de memoria utilizado por <nota2>: " << &aluno.nota2 << endl;

    cout << endl;

    //-----------------------------------------------------

    //atribui um valor para o atributo nome
    aluno.nome = "Benicio";
    cout << "Nome: " << aluno.nome << endl;

    //Atribui um valor para o atributo nota 1
    aluno.nota1 = 10;
    cout << "Nota 1: " << aluno.nota1 << endl;

    //Atribui um valor para o atributo nota 2
    aluno.nota2 = 10;
    cout << "Nota 2: " << aluno.nota2 << endl;

    cout << endl;

    //-----------------------------------------------------

    //Tentativa de acessar o valor de um atributo que n�o est� ativo. Nesse caso, o programa resulta em um comportamento indefinido
    cout << "Nome: " << aluno.nome << endl;

    //-------------------------------------------------------

    //fim do pograma
    return 0;


}

