#include <iostream>
using namespace std;

float ripetuto (int a, int b, int c){
    int numero=0;
    if (a==b || a==c){
        numero=a;
        return numero;
    }
    if(b==c){
        numero=b;
        return numero;
    }
    return -1;
}
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    cout<<ripetuto(a,b,c);
    return 0;
}
