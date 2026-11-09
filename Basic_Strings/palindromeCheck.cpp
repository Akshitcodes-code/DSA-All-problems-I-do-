#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string& s){
            string result = "";

            for (int i = s.length() - 1; i >= 0; i--) {
                result += s[i];
            }

            if(result == s){
                return true;
            }
            return false;
    }
