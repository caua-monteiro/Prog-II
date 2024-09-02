#include <iostream>
#include <ctime>
    
using namespace std;

int main()
{
    int Vec[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        Vec[i] = rand() % 51;
    }

    int *P = NULL;
    P = &Vec[0];
    
    cout << "Sem Ponteiro: " << endl;
    for(int i = 0; i < 10; i++){
        cout << Vec[i] << " ";
    }
    cout << endl;
    cout << "Com Ponteiro" << endl;
    for(int i = 0; i < 10; i++){
        cout << *P << " ";
        P++;
    }
    cout << endl;

    return 0;
}
