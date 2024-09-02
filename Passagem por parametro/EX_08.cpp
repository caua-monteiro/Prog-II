#include <iostream>
#include <string>
    
using namespace std;

void CapsLock(string& S){
    for(int i = 0; i < S.length(); i++){
        if(S[i] >= 97 && S[i] <= 122){
            S[i] -= 32;
        }
    }
}

int main()
{
    string MSN;
    cin >> MSN;

    CapsLock(MSN);

    cout << MSN << endl;

    
    return 0;
}
