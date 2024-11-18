#include <iostream>
#include <cassert>
#include "Principal.h"
    
using namespace std;

void Teste_Coder(){
    assert(Coder_senha("ABCD", 1) == "BCDE");
    assert(Coder_senha("ABCD", 2) == "CDEF");
    assert(Coder_senha("ABCD", 3) == "DEFG");
}

int main()
{
    Teste_Coder();
    cout << "Todos os testes do codificador da senha passaram" << endl;
    
    return 0;
}
