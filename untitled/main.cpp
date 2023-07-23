#include <iostream>
using namespace std;

 float Lunghezza(float P) {
    float g = 9.8, L;
    L=((P/6.2832)*g)*((P/6.2832)*g);
    return L;
}

int main () {
float P;
cin>>P;
cout<<Lunghezza(P);

return 0;
}