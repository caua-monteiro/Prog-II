#include <iostream>
#include "Principal.h"
#include <string>
#include <vector>
    
using namespace std;

string Coder_senha(string Senha, int chave){
    for(int i = 0; i < Senha.length(); i++){
        Senha[i] += chave;
    }
    return Senha;
}