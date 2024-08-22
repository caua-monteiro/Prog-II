#include <iostream>
    
using namespace std;

int Potencia(int A, int B){
    int Pot = 1;
    for(int i = 0; i<B; i++){
        Pot *= A;
    }
    return Pot;
}

int main()
{
    int Base, Expoente;
    cin >> Base >> Expoente;
    while (Base < 0 || Expoente < 0){
        cout << "Ambos os numeros devem ser maiores ou iguais a 0, tente novamente" << endl;
        cin >> Base >> Expoente;
    }  

    cout << Base << "^" << Expoente << " = " << Potencia(Base, Expoente) << endl;  
    
    return 0;
}
