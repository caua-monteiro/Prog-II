#include <iostream>
    
using namespace std;

int SomaPar(int N){
    if(N == 2)
        return 2;
    if(N%2 != 0)
        N--;
    return N + SomaPar(N -2);
}

int main()
{
    int N;
    cin >> N;
    cout << "Soma de pares: " << SomaPar(N) << endl;
    
    return 0;
}
