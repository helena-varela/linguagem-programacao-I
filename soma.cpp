#include <iostream>

using namespace std;

int somar(int a, int b){
    if (b == 0)
    {
        return a;
    }

    return somar(a + 1, b -1);
    
}

int main(){
    int a, b;
    cout << "Digite o primeiro número: ";
    cin >> a;
    cout << "Digite o segundo número: ";
    cin >> b;

    cout << "A soma é: " << somar(a, b) << endl;

    return 0;
}