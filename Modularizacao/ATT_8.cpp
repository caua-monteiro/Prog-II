#include <iostream>
    
using namespace std;

bool Bissexto(int A){
    if(A % 400 == 0){
        return true;
    }
    else{
        if(A % 100 == 0){
            return false;
        }
        else{
            if(A % 4 == 0){
                return true;
            }
            else return false;
        }
    }
}

int main()
{
    int Ano;
    cin >> Ano;

    if(Bissexto(Ano)){
        cout << "O ano e bissexto" << endl;
    }
    else{
        cout << "O ano nao e bissexto" << endl;
    }
    
    return 0;
}
