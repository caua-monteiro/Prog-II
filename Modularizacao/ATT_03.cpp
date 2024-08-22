#include <iostream>
    
using namespace std;

int SomaDoIntervalo(int A, int B){
    int Soma = 0;
    for(int i = min(A, B); i <= max(A,B); i++){
        Soma += i;
    }
    return Soma;
}

void Intervalo(int A, int B){
    cout << "(" << min(A, B) << ", " << max(A, B) << ")";
}

int main()
{
    int N, M;
    cin >> N >> M;

    if(N < 0 || M < 0){
        cout << "Apenas Numeros possitivos sao validos, reescreva as entredas" << endl;
        cin >> N >> M;
    }

    cout << "A soma do intervalo ";
    Intervalo(N, M); 
    cout << ": " << SomaDoIntervalo(N, M) << endl;

    return 0;
}
