#include <iostream>
    
using namespace std;

void Leitura(float *V, int N){
    for(int i = 0; i < N; i++){
        cin >> *(V+i);   
    }
}
void Escrita(float *V, int N){
    for(int i = 0; i < N; i++){
        cout << *(V+i) << " ";
    }
    cout << endl;
}

int main()
{
    float *v;
    int N;
    cin >> N;
    if(!(v = new(nothrow) float[N])){
        cout << "Falha de alocacao" << endl;
        return -1;
    }
    Leitura(v, N);
    Escrita(v, N);

    return 0;
}
