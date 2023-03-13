#include<iostream>

using namespace std;

int UCLN(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        }
        else b -= a;
    } 

    return a;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout <<  UCLN(a, b) << endl;
    if (UCLN(a,b) == 1) cout << "a and b are relatively primes" ;
    else cout << "a and b are not relatively primes";
    return 0;
}