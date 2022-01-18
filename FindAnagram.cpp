#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include<math.h>
using namespace std;

int isCountSame(vector<int>& cntText, vector<int>& cntPtr) {
    for(int i = 0; i < 256; i++) {
        if(cntText[i] != cntPtr[i]) return 0;
    }
    return 1;
}

int findAnagram(string text, string ptr) {
    vector<int> cntText(256, 0);
    vector<int> cntPtr(256, 0);
    for(int i = 0; i < ptr.length(); i++) {
        cntPtr[ptr[i]]++;
        cntText[text[i]]++;
    }

    for(int i = ptr.length(); i < text.length(); i++) {
        if(isCountSame(cntText, cntPtr)) {
            return 1;
        }
        cntText[text[i]]++;
        cntText[text[i-ptr.length()]]--;
    }
    return -1;
}
int main() {
    string text = "graphic";
    string ptr = "prg";
    cout << findAnagram(text, ptr);
    return 0;
}
