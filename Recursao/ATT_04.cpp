#include <iostream>
    
using namespace std;

int Tri(int N){
    if(N == 0)
        return N;
    if(N == 1 || N == 2)
        return N-1;

    return Tri(N-1) + Tri(N - 2) + Tri(N -3);
}

int main()
{
    int N;
    cin >> N;
    cout << "Tribonacci: " << Tri(N) << endl;
    
    return 0;
}
