#include<iostream>

using namespace std;
void Print(int m, int n){
   for (int i = 0 ;i < m ; i++){
    cout << " ";
   }
    for (int j = 0 ; j < n ; j++){
        cout << "*";
    }
}
int main(){
   int m, n = 1, line;
   cin >> line;
   m = line - 1 ;
   for (int i = 0 ; i < line ; i++){
        Print(m, n);
        cout << endl;
        n += 2;
        m--;
   }
    return 0;
}