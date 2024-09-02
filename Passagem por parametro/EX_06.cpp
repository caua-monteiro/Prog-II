#include <iostream>
    
using namespace std;

int Menos5(int *A){
    return *A-5;
}

int main()
{
    int Num;
    cin >> Num;
    cout << Menos5(&Num) << endl;
    
    return 0;
}
