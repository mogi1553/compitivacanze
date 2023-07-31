#include <iostream>
using namespace std;
int MAX=100;

void divisori(int v[], int v2[], int n) {
    int cont = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 2; j <= v[i] ; ++j) {
            if(v[i]%j==0) {
                for (int k = 2; k < j; ++k) {
                    if (j % k == 0) {
                        cont++;
                    }
                }
                if (cont == 0) {
                    v2[i] = j;
                }
                cont = 0;
            }


        }
    }
    for (int i = 0; i <n ; ++i) {
        cout<<v2[i]<<" ";
    }
    cout<<endl;


}



int main() {
  int v[MAX], n, v2[MAX], maggiore=0;
  cout<<"inserire lunghezza n :";
  cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
        v2[i]=0;
    }
    divisori(v, v2, n);
    for (int i = 0; i <n ; ++i) {
        if(maggiore<v2[i]){
            maggiore=v2[i];
        }
    }
    cout<<"il piu grande divisore primo : "<<maggiore;

    return 0;
}
