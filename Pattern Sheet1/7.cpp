/*
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/

#include<iostream>
using namespace std;
int main() {
    int n = 6;
    int k = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << k;
            k--;
        }
        k = 5;
        cout << endl;
    }
    n--;
    for(int i = 0; i < n; i++) {
        for(int j = n-i; j > 0; j--) {
            cout << k;
            k--;
        }
        k = 5;
        cout << endl;
    }
    return 0;
}