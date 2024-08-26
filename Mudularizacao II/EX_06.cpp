#include <iostream>
#include <ctime>
    
using namespace std;

int gerarNumeroAleatorio();

int main(){
    
    char Resp = 'S';
    do{
        cout << "Seu numero aleatorio e: " << gerarNumeroAleatorio() << endl;
        cout << "Deseja Receber outro Numero (S ou N)" << endl;
        while (Resp != 'S' && Resp != 'N'){
            cout << "REsposta invalida, tente outra"<< endl;
            cin >> Resp;
        }
        
    }while (Resp == 'S');
    
    
    return 0;
}

int gerarNumeroAleatorio(){
    srand(time(NULL));
    return (rand()%100)+1;
}