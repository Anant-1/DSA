#include<bits/stdc++.h>
#define NEWLINE "\n"
using namespace std;

int rabinKarp(string &text, string &ptr) {
    int hPtr = 0;
    int hText = 0;
    int b = 10;
    int ptrLen = ptr.length();
    int textLen = text.length();

    bool isSame = false;

    //Calculate pattern hash and first window of text hash
    for(int i = 0; i < ptrLen; i++) {
        hPtr += ((int)ptr[i]-96) * pow(b, ptrLen-(i+1));
        hText += ((int)text[i]-96) * pow(b, ptrLen-(i+1));
    }

    for(int i = 0; i <= textLen-ptrLen; i++) {
        if(hPtr == hText) {
            for(int j = 0; j < ptrLen; j++) {
                if(text[i+j] != ptr[j]) {
                    isSame = false;
                    break;
                }
                isSame = true;
            }

            if(isSame) cout << "Pattern find at position : " << i << endl; 
        }
            
        //Calculate hash of next window
        hText = ((hText - (((int)text[i]-96) * pow(b, ptrLen-1))) * b) + ((int)text[i+ptrLen]-96);

    }
    return -1;
}

int main() {
    string text = "ccaccaaedbadba";
    string ptr = "dba";
    cin >> text >> ptr;
    rabinKarp(text, ptr);
    return 0;
}
