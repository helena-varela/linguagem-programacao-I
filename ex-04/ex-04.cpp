#include <iostream>
#include "funcoes.h"
#include "structs.h"
#include <vector>

using namespace std;


int main(){
    cout << "Digite o que vosê deseja fazer: " << endl;
    cout << "1 - Cadastrar vendas" << endl;
    cout << "2 - Cadastrar funcionários" << endl;
    cout << "3 - Emitir o total de vendas" << endl;
    cout << "4 - Emitir o total de funcionários" << endl;

    int escolha;
    cin >> escolha;
    vector<Venda> vendas;
    vector<Funcionario> funcionarios;


    switch (escolha)
    {
    case 1:
        cadastrarVendas(vendas);
        break;
    case 2:
        cadastrarFuncionarios(funcionarios);
        break;
    case 3:
        exibirRelatorioVenda(vendas);
        break;
    case 4:
        exibirRelatorioFuncionario(funcionarios);
        break;
    
    default:
        break;
    }

    return 0;
}