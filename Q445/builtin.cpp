#include<stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    //__builtin_clz(num) -- > Tells the leading zeroes
    //__builtin_ctz(num) --> Tells the trailing zeroes

    int pos1 = __builtin_clz(n);
    int pos2 = __builtin_ctz(n);
    
    //1-based Indexing
    cout << "Position of SetBit Using __builtin_clz: " << pos1+1<< endl;
    cout << "Position of SetBit Using __builtin_ctz: " << 32-pos2<< endl;
    return 0;
}