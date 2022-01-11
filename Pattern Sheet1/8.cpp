/*
    1    
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1

*/

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int k = 1;
    for(int i = 0; i < n; i++) {
        for(int j = n-1-i; j > 0; j--) {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++) {
            if(j == 0) cout << k;
            else if(j == 2*i and i != 0) cout << k;
            else cout << " ";
        }
        for(int j = n-1-i; j > 0; j--) {
            cout << " ";
        }
        k++;
        cout << endl;
    }
    n--;
    k = n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2*k-1; j++) {
            if(j == 0) cout << k;
            else if(j == 2*k-2 and i != n-1) cout << k;
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