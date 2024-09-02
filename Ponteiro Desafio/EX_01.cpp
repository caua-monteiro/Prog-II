#include <iostream>
    
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int *T = NULL;
    T = &a;

    a += b;
    b = *T - b;
    a = a - b;

    cout << a << " " << b << endl;
    
    return 0;
}
