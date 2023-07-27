#include <iostream>
using namespace std;

int vocale(int l){
    int cont=0;
    char a;
    for (int i = 0; i <l ; ++i) {
        cin>>a;
        if (a=='a'||a=='u'||a=='o'||a=='i'||a=='e') {
            cont++;
        }
    }
    return cont;
}

int main() {
 int l;
 cin>>l;
 cout<<vocale(l);

    return 0;
}
