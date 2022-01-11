/*
1   1
 2 2
  3
 4 4
5   5
*/

#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    int count;
    count = n * 2 - 1;

    for(int i=1; i<=count; i++) {
        for(int j=1; j<=count; j++) {
            if(j==i || (j==count - i + 1)) {
                cout << i;
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}