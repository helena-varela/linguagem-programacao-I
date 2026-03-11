#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Aluno{
    string matricula;
    string nome;
    int idade;
    float nota1;
    float nota2;
    float nota3;
    
    float calcularMedia(){
        float media = (nota1 + nota2 + nota3)/3;
        return media;
    }

};

int main(){
    vector<Aluno> alunosCadastrados;
    
    for (int i = 0; i < 3; i++)
    {   
        Aluno aluno;
        cout << "Digite a matrícula do aluno: " << endl;
        cin >> aluno.matricula;

        // isso limpa o buffer depois de ler um número se o próximo input for um texto (string) e não atropelar o próximo input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Digite o nome do aluno: " << endl;
        //  Para nomes que podem ter espaços
        getline(cin, aluno.nome);

        cout << "Digite a idade do aluno: " << endl;
        cin >> aluno.idade;

        cout << "Digite a primeira nota do aluno: " << endl;
        cin >> aluno.nota1;

        cout << "Digite a segunda nota do aluno: " << endl;
        cin >> aluno.nota2;

        cout << "Digite a terceira nota do aluno: " << endl;
        cin >> aluno.nota3;

        cout << "Média final do aluno:" << aluno.calcularMedia() << endl;

        alunosCadastrados.push_back(aluno);
    }

    cout << "Alunos cadastrados:" << endl;
    for (int i = 0; i <= int(alunosCadastrados.size()); i++)
    {
        cout << alunosCadastrados[i].nome << endl;
    }
    
    string matricula_aluno;
    cout << "Buscar aluno, insira uma matrícula:" << endl;
    cin >> matricula_aluno;
    bool aluno_encontrado = false;

    for (int i = 0; i <= int(alunosCadastrados.size()); i++)
    {
        if (alunosCadastrados[i].matricula == matricula_aluno){
            cout << "Aluno encontrado: " << alunosCadastrados[i].nome << endl;
            aluno_encontrado = true;
            break;
        }
    }

    if (!aluno_encontrado)
    {
        cout << "Aluno não encontrado" << endl;
    }

    float media_geral = 0;
    for (int i = 0; i < int(alunosCadastrados.size()); i++)
    {
        media_geral += alunosCadastrados[i].calcularMedia();
    }
    media_geral /= alunosCadastrados.size();
    cout << "Média Geral do alunos\n: " << media_geral << endl;

    return 0;
}