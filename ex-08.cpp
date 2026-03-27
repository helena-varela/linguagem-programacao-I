#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> numeros;
    int indice;

    for (int i = 0; i < 5; i++)
    {
        int numero;
        cout << "\nDigite um número inteiro: ";
        cin >> numero;
        numeros.push_back(numero);
    }

    cout << "\nQual índice você deseja acessar?" << endl;
    cin >> indice;

    try{
        int valorAcessado = numeros[indice];
        throw out_of_range("Você está tentando acessar um índice fora do range");
        cout << valorAcessado << endl;

    } catch (const out_of_range& e){
        cout << "Erro: " << e.what() << endl;
    }

    return 0;
}