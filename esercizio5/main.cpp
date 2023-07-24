#include <iostream>
using namespace std;

bool naturale (int n){
    if(n>=0){
        return true;
    }
    return false;
}

int main() {
    int n, naturali=1, numero;
    cin>>n;
    if(naturale(n)){
        for (int i = 0; i <n ; ++i) {
            cin>>numero;
            if (naturale(n)){
                naturali++;
            }
        }
    }
    cout<<"ci sono "<<naturali<<" numeri naturali";
    return 0;
}
