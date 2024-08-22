#include <iostream>
    
using namespace std;

bool Par(int A){
    return (A%2 == 0? true : false);
}

int main(){
    int N;
    cin >> N;
    
    if(Par(N))
        cout << "Numero Par" << endl;
    else
        cout << "Numero Impar" << endl;
    
    return 0;
}
