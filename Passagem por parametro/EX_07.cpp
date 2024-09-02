#include <iostream>
#include <vector>
    
using namespace std;

void Inverte(int V[]){
    int Aux[10];
    for(int i = 0; i < 10; i++){
        Aux[i] = V[10-1-i];
    }
    for(int i = 0; i < 10; i++){
        swap(Aux[i], V[i]);
    }
}

int main()
{
    int Vetor[10];
    for(int i = 0; i < 10; i++){
        Vetor[i] = i+1;
    }

    Inverte(Vetor);

    for(int i = 0; i < 10; i++){
        cout << Vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
