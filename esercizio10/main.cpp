#include <iostream>
using namespace std;
int MAX=100;

int somma(int naturale[], int n){
    int  s = 0;
    for (int i = 0; i <n ; ++i) {
        s += naturale[i];
    }
    return s;
}

int main() {
   int naturali[MAX], n;
   cin >> n;
   for (int i = 0; i <n ; ++i) {
       cin >> naturali[i];
     }
    cout << "la somma dei " << n << " numeri naturali risulta " << somma(naturali, n);

    return 0;
}
