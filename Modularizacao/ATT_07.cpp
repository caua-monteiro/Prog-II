//Calcular a área de um círculo: Dado o raio de um círculo, calcule sua área usando a fórmula π * r^2.

#include <iostream>
    
using namespace std;

#define PI 3.14159265

float Area(int R){
    return PI*R*R;
}

int main(){
    float Raio;
    cin >> Raio;

    while (Raio < 0){
        cout << "O raio deve ser positivos, tente novamente" << endl;
        cin >> Raio;
    }

    cout << "Raio = " << Area(Raio) << endl;
    
    
    return 0;
}
