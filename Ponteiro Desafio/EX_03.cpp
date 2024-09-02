#include <iostream>
    
using namespace std;

void Dobro(int *P){
    *P *= 2; 
}

int main()
{
    int N;
    cin >> N;
    int *p = NULL;
    p = &N;

    cout << "Pre-funcao: " << N << endl;
    Dobro(p);
    cout << "pos-funcao: " << N << endl;

    
    return 0;
}
