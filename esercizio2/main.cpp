#include <iostream>
using namespace std;

int tempo(int ore, int minuti , int secondi){
    int t;
    minuti = 60*minuti;
    ore=60*ore*60;
    t=secondi+ore+minuti;
    return t;
}

int main() {
   int ore , minuti , secondi, t, t1, ore1 , minuti1 , secondi1;
   cin >> ore>>minuti>>secondi;
   cin >>ore1>>minuti1>>secondi1;
   t= tempo(ore, minuti, secondi);
   t1=tempo(ore1, minuti1,secondi1);
    if (t>t1){
        cout<<"t risulta maggiore di t1";
    }
    else{
       cout<<"t1 risulta maggiore di t";
    }


    return 0;
}
