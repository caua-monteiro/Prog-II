#include <iostream>
    
using namespace std;

int Fatorial(int A){
    int Fat = 1, aux = A;
    if(A == 0){
        return 1;
    }
    else{
        while (aux > 0){
            Fat *= aux;
            aux--;
        }
        return Fat;   
    }
}

int main()
{
    int N;
    cin >> N;

    while (N < 0){
        cout << "O numero deve ser natural, tente novamente" << endl;
        cin >> N;
    }
    
    cout << "Fatorial de " << N << ": " << Fatorial(N);

    return 0;
}
