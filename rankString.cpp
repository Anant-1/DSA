#include<iostream>
#include<string>
using namespace std;

int fact(int n) {
    if(n <= 1) return 1;
    int f = 1;
    for(int i = 2; i <= n; i++) { 
        f *= i;
    }
    return f;
}

int findRank(string str) {
    int rank = 1;
    int len = 7;
    int mul = fact(len);
    int cnt[256] = {0}; 

    for(int i = 0; i < len; i++) 
        cnt[str[i]]++;
    for(int i = 1; i < 256; i++) 
        cnt[i] += cnt[i-1];

    for(int i = 0; i < len; i++) {
        mul = mul / (len-i);
        rank += cnt[str[i]-1]*mul;
        
        for(int j = str[i]; j < 256; j++)
            cnt[j]--;
    }
    return rank;
}

int main() {
    string str = "";
    cout << findRank(str);
    return 0;   
}