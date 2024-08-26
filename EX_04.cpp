#include <iostream>
#include <vector>

using namespace std;

int Vetor[5];


void OrdenarDecrescente(int vec[]);
void OrdenarCrescente(int vec[]);

int main()
{
    string Modo;

    cout << "Prencha seu Vetor com 5 inteiros aleatorios" << endl;
    for(int i = 0; i < 5; i++){
        int aux;
        cin >> aux;
        Vetor[i] = aux;
    }

    cout << "Escolha como quer ordenar seu Vetor (Crescente ou Decrescente)" << endl;
    cin >> Modo;

    while (Modo != "Crescente" && Modo != "Decrescente"){
        cout << "Modo de ordenacao invalido, tente outra vez!" << endl;
        cin >> Modo;
    }
    
    if(Modo == "Crescente"){
        OrdenarCrescente(Vetor);
    }
    else{    
        OrdenarDecrescente(Vetor);
    }

    for(int i = 0; i < 5; i++){
        cout << Vetor[i] << " ";
    }
    cout << endl;

    return 0;
}


void OrdenarDecrescente(int vec[]){

    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - 1 - i; j++){
            if(vec[j] < vec[j+1]){
                swap(vec[j + 1], vec[j]);
           
            }
    }
    }
}
void OrdenarCrescente(int vec[]){

    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - 1 - i; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j + 1]);
           
            }
    }
    }
}