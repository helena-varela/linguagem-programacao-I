#include <iostream>
#include <vector>

using namespace std;

void desempilharPorIndice(vector<int>& lista, int indice){
    // indice = indice - 1;
    for (int i = 0; i < int(lista.size()); i++)
    {
        if(i == indice){
            for (int j = lista.size() - 1; j >= indice; j--)
            {
                lista.pop_back();
            }
        }
    }     
}

void desempilharPorValor(vector<int>& lista, int valor){
    for (int i = 0; i < int(lista.size()); i++)
    {
        if(lista[i] == valor){
            for (int j = lista.size() - 1; j >= i; j--)
            {
                lista.pop_back();
            }
        }
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

    desempilharPorValor(lista2, 9);
    
    cout << "Lista depois de desempilhar por valor: " << endl;
    for (int i = 0; i < int(lista2.size()); i++)
    {
        cout << lista2[i] << " ";
    }

    cout << endl;

    return 0;
}