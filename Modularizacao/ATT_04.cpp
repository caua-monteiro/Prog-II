#include <iostream>
#include <cmath>
    
using namespace std;

#define PI 3.14159265

float Esfera(float R){
    return (4*PI*pow(R, 3))/3;
}

int main()
{
    float Raio;
    cin >> Raio;
    while(Raio < 0){ 
        cout << "O raio deve ser possitivo, tente novamente" << endl; 
        cin >> Raio;
    }

    cout << "Volume: "<< Esfera(Raio) << " m^3" << endl;

    return 0;
}
