#include <iostream>
    
using namespace std;

typedef struct Alunos{
    string Nome;
    int Serie;
    float Nota;
};


void Leitura(Alunos *V, int N){
    for(int i = 0; i < N; i++){
        cin >> V[i].Nome
            >> V[i].Serie
            >> V[i].Nota;  
    }
}
void Escrita(Alunos *V, int N){
    for(int i = 0; i < N; i++){
        cout << V[i].Nome <<" "
             << V[i].Serie <<" "
             << V[i].Nota << endl;
    }
}

float Media(Alunos *V, int N){
    float Soma = 0;
    for(int i = 0; i < N; i++){
        Soma += V[i].Nota;
    }
    return Soma/N;
}

int main()
{
    Alunos *v;
    int N;
    cin >> N;
    if(!(v = new(nothrow) Alunos[N])){
        cout << "Falha de alocacao" << endl;
        return -1;
    }
    Leitura(v, N);
    Escrita(v, N);
    cout << "MEDIA: " << Media(v, N) << endl;
    return 0;
}
