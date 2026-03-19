#include <iostream>
#include <vector>
#include "structs.h"
using namespace std;

int main(){
    
    return 0;
}

void cadastrarFuncionarios(vector<Funcionario>& funcionarios){
    cout << "Cadastrar funcionários" << endl;
    cout << "Quantos funcionários deseja cadastrar? " << endl;
    int quantidadeFuncionarios;
    cin >> quantidadeFuncionarios;

    Funcionario funcionario;

    for (int i = 0; i < quantidadeFuncionarios; i++)
    {
        cout << "Digite o nome do funcionário: " << endl;
        cin >> funcionario.nomeFuncionario;
        cout << "Digite o cargo do funcionário: " << endl;
        cin >> funcionario.cargo;

        funcionarios.push_back(funcionario);
    }
}

void exibirRelatorioFuncionario(vector<Funcionario> funcionarios){
    for (int i = 0; i < int(funcionarios.size()); i++)
    {
        cout << "Nome do Funcionário: " << funcionarios[i].nomeFuncionario << ", Cargo: " << funcionarios[i].cargo << endl;
    }
}