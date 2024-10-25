#include <iostream>
    
using namespace std;

int Soma(int n){
    if(n == 1)
        return 1;
    return n + Soma(n - 1);
}

int main()
{
    int N; 
    cin >> N;
    cout << "Soma: " << Soma(N) << endl;
    
    return 0;
}
