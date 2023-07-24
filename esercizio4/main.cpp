#include <iostream>
using namespace std;

 int differenza (int a, int b, int c){
     int somma=0, prodotto=0, d=0;
     prodotto=a*b*c;
     somma=a+b+c;
     d=prodotto-somma;
     if(d<0){
         d=somma-prodotto;
     }
     return d;
 }


 int main() {
int a, b, c;
cin>>a>>b>>c;
cout<<differenza(a,b,c);

    return 0;
}
