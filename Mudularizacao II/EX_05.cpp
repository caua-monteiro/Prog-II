#include <iostream>
    
using namespace std;

double calcularAreaRetangulo(double a, double b);

int main()
{
    double a, b;
    cin >> a >> b;

    cout << calcularAreaRetangulo(a, b) << endl;
    
    return 0;
}

double calcularAreaRetangulo(double a, double b){
    return a*b;
}