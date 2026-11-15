#include<bits/stdc++.h>

using namespace std;

bool rotateString(string& s, string& goal){
    for(int i = 0; i<s.size(); i++){
        if(s == goal) return true;
        else{
            s = s.substr(1)+s[0];
        }
    }
    return false;
}