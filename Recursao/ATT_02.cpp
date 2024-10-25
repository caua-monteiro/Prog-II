#include <iostream>
    
using namespace std;

int Digitos(int n, int d){
    if(n/10 == 0){
        return 1;
    }
    return d + Digitos(n/10, d);
}

int main()
{
    int N, Digito = 1;
    cin >> N;
    cout << "Digitos: " << Digitos(N, Digito) << endl;
    
    return 0;
}
