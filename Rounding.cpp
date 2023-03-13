#include<iostream>
#include<math.h>

using namespace std;

int RoundWithCeil(double n){
    int newnum = ceil(n);
    return newnum;
}
int SimpleRound(double n){
    double decimal = n - int(n);
    if (decimal <= 0.5) return int(n);
    return int(n) + 1;
}

int main(){
    double n ;
    cin >> n;
   cout << SimpleRound(n);
    return 0;
}