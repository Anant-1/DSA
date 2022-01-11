/*
    1
   321
  54321
 7654321
987654321

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
        for(int j = k; j >= 1; j--) {
            cout << j;
        }
        k += 2;
        for(int j = n-1-i; j > 0; j--) {
            cout << " "; 
        }
        cout << endl;
    }
    return 0;
}