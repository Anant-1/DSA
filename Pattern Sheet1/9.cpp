/*
E       E 
 D     D
  C   C
   B B
    A  
*/

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int k = n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2*k-1; j++) {
            if(j == 0) cout << (char)(k+64);
            else if(j == 2*k-2 and i != n-1) cout << (char)(k+64);
            else cout << " ";
        }
        for(int j = 0; j <= i; j++) {
            cout << " ";
        }
        cout << endl;
        k--;
    }
    return 0;
}