#include <iostream>
    
using namespace std;

int main()
{
    int N, *v;
    cin >> N;
    if(!(v = new(nothrow) int[N])){
        cout << "Falha na alocacao" << endl;
        return -1;
    }

    for(int i = 0; i < N; i++){
        v[i] = i;
        cout << v[i] << " ";
    }

    delete[] v;
    v == NULL;

    return 0;
}
