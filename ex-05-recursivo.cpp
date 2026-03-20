#include <iostream>
#include <vector>

using namespace std;

void desempilharPorIndice(vector<int>& lista, int indice){
    if(lista.back() == lista[indice]){
        lista.pop_back();
    }
    else {
        lista.pop_back();
        desempilharPorIndice(lista, indice);
    }
}

void desempilharPorValor(vector<int>& lista, int valor){
    if(lista.back() == valor){
        lista.pop_back();
    }
    else {
        lista.pop_back();
        desempilharPorValor(lista, valor);
    }
}

int main(){
    vector <int> lista;

    for (int i = 0; i < 5; i++)
    {
        int valor;
        cin >> valor;
        lista.push_back(valor);
    }

    cout << "Lista antes de desempilhar: " << endl;
    for (int i = 0; i < int(lista.size()); i++)
    {
        cout << lista[i] << " ";
    }

    cout << endl;

    
    desempilharPorIndice(lista, 3);

    cout << "Lista depois de desempilhar por índice: " << endl;
    for (int i = 0; i < int(lista.size()); i++)
    {
        cout << lista[i] << " ";
    }

    cout << endl;

    vector <int> lista2;
    for (int i = 0; i < 5; i++)
    {
        int valor;
        cin >> valor;
        lista2.push_back(valor);
    }

    cout << "Lista antes de desempilhar: " << endl;
    for (int i = 0; i < int(lista2.size()); i++)
    {
        cout << lista2[i] << " ";
    }

    desempilharPorValor(lista2, 9);
    
    cout << "Lista depois de desempilhar por valor: " << endl;
    for (int i = 0; i < int(lista2.size()); i++)
    {
        cout << lista2[i] << " ";
    }

    cout << endl;

    return 0;
}