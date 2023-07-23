#include <iostream>
using namespace std;

int caratteri(string c) {
    int cont;
    for (int i = 0; i <c.size() ; ++i) {
        if(c.at(i)>='A' && c.at(i)){
            cont++;
        }
    }
    return cont;
}

int main() {
    string c;
    getline(cin, c);
    cout<<caratteri(c);
    return 0;
}
