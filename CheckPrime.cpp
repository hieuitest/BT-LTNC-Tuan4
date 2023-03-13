#include<iostream>

using namespace std;
bool Check(int n ){
    if (n < 2) return false;
    else if (n == 3 ) return true;
    else {
        for (int i = 2 ; i < n ; i++){
            if (n % i == 0) return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        if (Check(i)) cout << i << " ";
    }
    
    return 0;
}