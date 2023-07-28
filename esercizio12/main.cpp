#include <iostream>
int MAX=100;
using namespace std;

bool maggiore(int v[], int n) {
    int quad=0;
    for (int i = 0; i <n ; ++i) {

        if (v[i]<quad){
            return false;
        }
        quad=v[i]*v[i];
    }
    return true;
}


int main() {
    int v[MAX], n;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin >> v[i];
    }
    cout << maggiore(v, n);

    return 0;
}
