#include <iostream>
    
using namespace std;

float Convert(float T){
    return (T * 9)/5 + 32;
}

int main()
{
    float Temp;
    cin >> Temp;

    cout << Temp << " C = " << Convert(Temp) << " F" << endl;
    

    
    return 0;
}
