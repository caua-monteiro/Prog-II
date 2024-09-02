#include <iostream>
#include <string>
    
using namespace std;

void ContaVogal(string Plv, int *V){
    int tam = Plv.length();
    for(int i = 0; i < tam; i++){
        char L = toupper(Plv[i]);
        if(L == 'A' || L == 'E' || L == 'I' || L == 'O' || L == 'U'){
            *V += 1;
        }
    }
}

int main()
{
    string Palavra;
    int Vogais = 0;
    int *P = NULL;
    P = &Vogais;

    cin >> Palavra;

    ContaVogal(Palavra, P);

    cout << "Num de Vogais: " << Vogais << endl;

    
    return 0;
}
