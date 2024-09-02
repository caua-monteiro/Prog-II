#include <iostream>
    
using namespace std;

int Multiplica(int *A, int *B){
    return *A * *B;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Multiplica(&a, &b) << endl;
    
    return 0;
}
