#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largeOddNum(string& s) {
        int endIdx = -1;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 != 0) {
                endIdx = i;
                break;
            }
        }
        
        if (endIdx == -1) {
            return "";
        }
    
        int startIdx = 0;
        while (startIdx <= endIdx && s[startIdx] == '0') {
            startIdx++;
        }
        
        return s.substr(startIdx, endIdx - startIdx + 1);
    }
};
