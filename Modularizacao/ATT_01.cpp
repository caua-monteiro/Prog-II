#include <iostream>
    
using namespace std;

bool DivQuatro(int A){
    return (A % 4 == 0? true : false);
}

int main()
{
    int N;
    cin >> N;
    if(DivQuatro(N)){
        cout << "Divisivel por quatro" << endl;
    }
    else{
        cout << "Nao Divisivel por quatro" << endl;
    }
    
    return 0;
}
