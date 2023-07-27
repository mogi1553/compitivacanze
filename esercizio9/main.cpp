#include <iostream>
using namespace std;

int modulo(int a){
    if (a<0){
        a=-a;
    }
    return a;
}
int main() {
    int numero;
    cin>>numero;
    cout<<modulo(numero);
    return 0;
}
