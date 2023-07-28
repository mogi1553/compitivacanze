#include <iostream>
using namespace std;

int MAX=100;

int valori( int v[], int a, int b, int n ){
    int cont=0;
    for (int i = 0; i <n ; ++i) {
        if (v[i]<=b && v[i]>=a){
            cont++;
        }
        if(v[i]<=a && v[i]>=b){
            cont++;
        }
    }
    return cont;
}


int main() {
    int v[MAX], a, b, n;
    cin >> n;
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];
    }
    cout << "inserire 2 numeri naturali :";
    cin >> a >> b;
    cout << valori(v,a,b,n) << " valori sono compresi tra " << a << " e " << b;
    return 0;
}
