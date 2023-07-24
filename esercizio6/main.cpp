#include <iostream>
using namespace std;

int divisore(int n){
   int cont=0;
   for (int i = 1; i<=n ; ++i) {
        if(n%i==0){
            cont+=1;

        }
    }
   return cont;
}

int main() {
    int n, divisori=0;
    cin >> n;
    divisori =divisore(n);
    cout << "il numero " << n << " ha " << divisore(n)<< " divisori"<<endl;
    cout << "il numero " << divisori << " ha " << divisore(divisori)<<" divisori";

    return 0;
}
