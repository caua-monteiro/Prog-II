#include <iostream>
    
using namespace std;

int main(){
    float Num01 = 7.3, Num02;
    float *ponFloat = NULL;
    ponFloat = &Num01;

    cout << "*PonFloat = " << *ponFloat << endl;

    Num02 = *ponFloat;

    cout << "Num02 = " << Num02 << endl;

    cout << "Endereco Num01 Direto = " << &Num01 << endl;

    cout << "Endereco Num01 Ponteiro = " << ponFloat << endl;
    
    return 0;
}
